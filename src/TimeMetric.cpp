#include "TimeMetric.h"

TimeMetric::TimeMetric()
{
    reset();
}
TimeMetric::TimeMetric(std::string n) : TimeMetric()
{
    name = n;
}

TimeMetric::~TimeMetric()
{
}


void TimeMetric::set_name(std::string n)
{
    name = n;
}

void TimeMetric::start(float t)
{
    t_start = t;
}

void TimeMetric::stop(float t)
{
    t_stop = t;
    t_all += t_stop - t_start;
    count += 1.0f;
}

void TimeMetric::add_with_during(float t){
    t_all += t;
    count += 1.0f;
}

void TimeMetric::reset()
{
    count = 0.0f;
    t_all = 0.0f;
    t_start = 0.0f;
    t_stop = 0.0f;
}

void TimeMetric::print(){
    std::cout << "Mean time of " << name << " : " << mean()<< " ms      measuring "<<count<<" times;" <<std::endl;

}

float TimeMetric::mean()
{
    return t_all / count;
}