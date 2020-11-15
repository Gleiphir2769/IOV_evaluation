//
// Created by daqige on 2020/11/15.
//

#ifndef IOV_EVALUATION_TASK_H
#define IOV_EVALUATION_TASK_H


#include <iostream>
#include "Vehicle.h"

class Task
{
private:
    enum {DATA_SIZE = 2000};
    const int id = (int)time_t();
    const double data_size = DATA_SIZE;
    Vehicle* belone_vehicle;

public:
    //Task();
    ~Task();

    friend std::ostream& operator<<(std::ostream& os, const Task& t);

    Task(Vehicle *pVehicle, int i);
    Task();
};



#endif //IOV_EVALUATION_TASK_H
