#ifndef TIMEMETRIC_MANAGER_H
#define TIMEMETRIC_MANAGER_H

#include <iostream>
#include "TimeMetric.h"

class TimeMetricManager
{
private:
    std::vector<TimeMetric> sensors;
public:
    TimeMetricManager();
    ~TimeMetricManager();
}

#endif