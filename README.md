## 特征

- 能使用协程和reactor两种模式构建网络应用
- 现代版的C++11接口，利用c++11新的特性,利用chrono时间，thread库，非阻塞异步接口利用C++11的functional/bind形式的回调仿函数 
- 协程模式中能够用同步的方式表现出异步的特性，简化编码的逻辑
- 封装了spdlog库，更加方便高效地使用高性能日志
- 封装了mysql c api,使得mysql使用更加简单


## 构建

```
$ sudo apt install g++ cmake make libboost-all-dev mysql-server libmysqlclient-dev libcurl4-openssl-dev libbenchmark-dev
 

$ mkdir build && cmake ..

$ make 

$ make install   
```

## 示例

### 协程echo server:

```cpp
#include <burger/net/CoTcpServer.h>
#include <burger/base/Log.h>
#include <burger/net/RingBuffer.h>

using namespace burger;
using namespace burger::net;

void connHandler(CoTcpConnection::ptr conn) {
    RingBuffer::ptr buffer = std::make_shared<RingBuffer>();
    while(conn->recv(buffer) > 0) {
        conn->send(buffer);
    }
}

int main() {
    LOGGER(); LOG_LEVEL_DEBUG;
    Scheduler sched;
    InetAddress listenAddr(8888);

    CoTcpServer server(&sched, listenAddr);
    server.setConnectionHandler(connHandler);
    server.start();

    sched.wait();
    return 0;
}
```

## 模块

### 配置模块

我们采用ini作为配置文件

定义一个协程的栈大小

```
[coroutine]
stackSize = 3 * 1024 * 1024
```
利用Config::Instance去获取ini配置文件

```
auto& configManager = Config::Instance("/NewConfig/conf.ini");

configManager.getString("coroutine", "stackSize");
````

### 协程模块

协程：用户态的线程，更轻量级。通过hook系统函数，把复杂的异步调用，封装成同步操作。降低业务逻辑的编写复杂度。

采用boost.context里面的fcontext_t的方式实现

```
Coroutine::ptr co = std::make_shared<Coroutine>(func);
```

实际上我们没有向用户暴露co这个概念，用户是不应该自己去创建co的，而是以callback的形式告诉希望完成什么任务。

### 协程调度模块

schedule 负责整个系统的协程调度，Schduler带有一个线程池，而协程的运行依赖于执行器 Processor,每一个线程拥有一个Processor，可以算作一个per thread one processor模型，是一个1：N的协程调度模型。

### Hook模块

hook系统底层和socket相关的API，socket io相关的API，以及sleep系列的API。hook的开启控制是线程粒度的。可以自由选择。通过hook模块，可以使一些不具异步功能的API，展现出异步的性能。
