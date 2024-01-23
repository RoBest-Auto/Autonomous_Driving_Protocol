# Autonomous_Driving_Protocol

## 车辆与中台交互的协议

---

    这是一份使用 proto3 语言编写的消息类型定义文件。其中包含了一些基本的消息类型，如 Header、Point、Quaternion、Pose、PoseStamped、Path、Vector3、Twist、Current_pose、Current_twist、Goal_pose、Current_path、Goal_twist 和 Multiple_goal。这些消息类型可以用于在 中台和ROS 系统之间进行通信。

### warning

- 成员的float64类型使用double类型定义
- Header中忽略了seq成员
