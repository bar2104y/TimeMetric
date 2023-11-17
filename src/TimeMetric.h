#ifndef TIMEMETRIC_H
#define TIMEMETRIC_H


#include <iostream>
#include <chrono>

class TimeMetric
{
private:
    std::chrono::high_resolution_clock::time_point t_start, // time of start
                                                    t_stop; // time of end
    float t_all,                                            // total time
            count;                                          // nums of calls
    
    std::string name;                                       // name of timer
            

public:
    TimeMetric();
    TimeMetric(std::string n);
    ~TimeMetric();

    void set_name(std::string n);
    std::string get_name();
    void start();                       // start measuring
    void stop();                        // end measuring
    void add_with_during(float t);      // add another measuring
    void reset();                       // reset stats

    void print();                       // print stats

    float mean();                       // get mean time    

};

#endif