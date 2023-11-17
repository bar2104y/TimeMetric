#ifndef TIMEMETRIC_H
#define TIMEMETRIC_H
#include <iostream>

class TimeMetric
{
private:
    float t_start,              // Время начала последнего события
            t_stop,             // Время конца последнего события
            t_all,              // Среднее время
            count;              // Количество вызовов
    
    std::string name;           // Имя экземпляра
            

public:
    TimeMetric();
    TimeMetric(std::string n);
    ~TimeMetric();

    void set_name(std::string n);
    void start(float t);        // Записать время начала действия
    void stop(float t);         // Записать время конца действия
    void add_with_during(float t);
    void reset();


    void print();

    float mean();               // Среднее время выполнения действия    

};

#endif