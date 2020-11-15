//
// Created by daqige on 2020/11/15.
//

#include <ctime>
#include "Vehicle.h"

Vehicle::Vehicle() {
    srand((unsigned) time(0));
    // todo: 注意替换道路长度为宏定义变量
    this->location = rand() % (200 / 2 - 0) + 0;
    this->timestamp = 0;
    for (int i = 0; i < 5; i++) {
        Task nt (this, i);
        this->task_queue.push(nt);
    }
}