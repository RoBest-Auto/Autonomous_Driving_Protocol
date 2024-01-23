# Autonomous_Driving_Protocol

## 车辆与中台交互的协议

---

    这是一份使用 proto3 语言编写的消息类型定义文件。其中包含了一些基本的消息类型，如 Header、Point、Quaternion、Pose、PoseStamped、Path、Vector3、Twist、Current_pose、Current_twist、Goal_pose、Current_path、Goal_twist 和 Multiple_goal。这些消息类型可以用于在 中台和ROS 系统之间进行通信。

#### 基础数据定义

Header、Point、Quaternion、Pose、PoseStamped、Path、Vector3、Twist

#### 传输的数据

Current_pose	车辆当前数据

Current_twist	车辆当前速度

Goal_pose	目标位置点

Current_path	车辆当前路线

Goal_twist 	目标速度值

Multiple_goal	多目标点设置

TODO

- 根据官方说明优化解析
- 优化数据定义，避免生存不会传输的数据的函数，如header等

### warning

- 成员的float64类型使用double类型定义
- Header中忽略了seq成员
