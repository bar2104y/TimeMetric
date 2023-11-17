#include "TimeMetric.h"
#include "TimeMetricManager.h"

#include <cmath>
#include <iomanip>

int main()
{
    TimeMetricManager manager;

    manager.add_sensor("first sensor");

    float y = 1;
    uint64_t n = 100000000;

    manager.start((size_t)0);
    for (uint64_t i=1; i<n; i++)
    {
        y = i*y/i;
    } 
    manager.stop((size_t)0);

    manager.info();
    std::cout<<"/*=====================================*/"<<std::endl;
    manager.print();

    std::cout<<std::fixed << std::setprecision(9)<<"After "<<n<<" iterations error is "<<std::fabs(y-1.0)<<std::endl;
}