//
// Created by daqige on 2020/11/15.
//

#include "Task.h"
#include "Vehicle.h"



std::ostream& operator<<(std::ostream& os, const Task& t) {
    os << t.id << " hours, " << t.data_size << " minutes";
    return os;
    // TODO: 在此处插入 return 语句
}

Task::Task(Vehicle* v, int n) : id(n) {
    this->belone_vehicle = v;
}

