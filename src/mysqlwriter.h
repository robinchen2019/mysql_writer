#ifndef MYSQLWRITER_H
#define MYSQLWRITER_H

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class MysqlWriter: public rclcpp::Node
{
public:
    MysqlWriter();
};

#endif // MYSQLWRITER_H
