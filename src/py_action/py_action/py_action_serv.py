import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from moveit_ywf_msg.action import MoveitYwfIntf
import time




class MoveitYwfActionServer(Node):

    def __init__(self):
        super().__init__('MoveitYwf_action_server')
        self._action_server = ActionServer(
            self,
            MoveitYwfIntf,
            'MoveitYwf',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = MoveitYwfIntf.Feedback()

        feedback_msg._feedback="收到了"
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)
        goal_handle.succeed()

        result = MoveitYwfIntf.Result()
        result.result="结束了"
        return result


def main(args=None):
    rclpy.init(args=args)

    MoveitYwf_action_server = MoveitYwfActionServer()

    rclpy.spin(MoveitYwf_action_server)


if __name__ == '__main__':
    main()

# def main():
#     print('Hi from py_action.')


# if __name__ == '__main__':
#     main()
