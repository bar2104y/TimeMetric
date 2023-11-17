#include "TimeMetric.h"

#include <cmath>
#include <iomanip>

int main()
{
    TimeMetric t;

    float y = 1;
    uint64_t n = 100000000;

    t.start();
    for (uint64_t i=1; i<n; i++)
    {
        y = i*y/i;
    } 
    t.stop();

    t.print();

    std::cout<<std::fixed << std::setprecision(9)<<"After "<<n<<" iterations error is "<<std::fabs(y-1.0)<<std::endl;
}