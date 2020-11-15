//
// Created by daqige on 2020/11/15.
//

#ifndef IOV_EVALUATION_VEHICLE_H
#define IOV_EVALUATION_VEHICLE_H


#include"Task.h"
#include<queue>

class Vehicle
{
private:
    enum { C_size = 1, V_Frequency = 1000, Speed = 10};
    const double frequency = V_Frequency;
    const double speed = Speed;
    double location;
    std::queue<Task> task_queue;
    const int capacity = C_size;
    double timestamp;


public:
    Vehicle();
    ~Vehicle();
    void run(double loca, double time);
    double tackle(Task t);
    Task & push_task();

};


#endif //IOV_EVALUATION_VEHICLE_H
