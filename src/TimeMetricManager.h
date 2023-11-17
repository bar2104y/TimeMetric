#ifndef TIMEMETRIC_MANAGER_H
#define TIMEMETRIC_MANAGER_H

#include <iostream>
#include <vector>

#include "TimeMetric.h"

class TimeMetricManager
{
private:
    std::vector<TimeMetric> sensors;
public:
    TimeMetricManager();
    ~TimeMetricManager();

    void add_sensor();
    void add_sensor(TimeMetric t);
    void add_sensor(std::string name);
    void add_sensor(const char* name);

    int delete_sensor(size_t index);

    void start(size_t index);
    void stop(size_t index);

    void print();
    void info();
};

#endif