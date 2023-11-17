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

void TimeMetric::start()
{
    t_start = std::chrono::high_resolution_clock::now();
}

void TimeMetric::stop()
{
    t_stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> time_span  = std::chrono::duration_cast<std::chrono::duration<float>>(t_stop-t_start);
    t_all += time_span.count();
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
    t_start = t_stop = std::chrono::high_resolution_clock::now();
}

void TimeMetric::print(){
    std::cout << "Mean time of " << name << " : " << mean()<< " ms      measuring "<<count<<" times;" <<std::endl;

}

float TimeMetric::mean()
{
    return t_all / count;
}