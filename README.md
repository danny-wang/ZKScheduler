
### 启动过程

#### Master

1. 向zookeeper写路径/zkscheduler/0，并设置自己的ip和端口
2. 监听根目录下所有的事件，发现有新节点创建，立刻更新自己维护的节点信息

#### Slave

1. 向zookeeper询问/zkscheduler/0是否存在，一直等到它存在
2. 询问master节点的地址和端口，向master请求分配id
3. 在zookeeper上新建路径/zookeeper/id，并上传自己的信息
4. 监听master路径的事件
5. 向master节点发起状态同步命令,同步后设置自己的状态为就绪

### Zookeeper事件监听

#### Master

- slave节点任务开始、结束、失败，更新维护的任务信息表,slave的当前状态表
- slave任务成功结束，向该slave发起特定目录同步请求
- slave节点就绪状态改变，将该节点移出/移入任务分配待选列表

#### Slave

- master状态发生改变，zookeeper上设置自己为非就绪，

### Command处理

#### Master



#### Slave

- 客户端命令对于一律转发给Master进行处理
- TaskCommand交由TaskManager放入任务缓冲池
- StopCommand 

