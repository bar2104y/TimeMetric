#include "TimeMetricManager.h"

TimeMetricManager::TimeMetricManager()
{
    sensors.clear();
}

TimeMetricManager::~TimeMetricManager()
{

}

void TimeMetricManager::add_sensor()
{
    TimeMetric t;
    add_sensor(t);
}
void TimeMetricManager::add_sensor(TimeMetric t)
{
    sensors.push_back(t);
}
void TimeMetricManager::add_sensor(std::string name)
{
    TimeMetric t;
    t.set_name(name);
    add_sensor(t);
}
void TimeMetricManager::add_sensor(const char* name)
{
    TimeMetric t;
    add_sensor(static_cast<std::string>(name));
}

int TimeMetricManager::delete_sensor(size_t index)
{
    if (index >= sensors.size())
        return -1;
    sensors.erase(sensors.begin() + index);

    return 0;
}

void TimeMetricManager::print()
{
    for (size_t i = 0; i < sensors.size(); i++)
        sensors[i].print();
}

void TimeMetricManager::info()
{
    std::cout<<"Time manager include "<<sensors.size()<<" sensors:\n";
    for (size_t i = 0; i < sensors.size(); i++)
        std::cout<<"\t"<<sensors[i].get_name()<<std::endl;
}

void TimeMetricManager::start(size_t index)
{
    if (index >= sensors.size())
        return;
    sensors[index].start();
}
void TimeMetricManager::stop(size_t index)
{
    if (index >= sensors.size())
        return;
    sensors[index].stop();
}