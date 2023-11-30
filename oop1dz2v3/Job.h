#ifndef OOP1DZ2V3_JOB_H
#define OOP1DZ2V3_JOB_H
#include "Worker.h"
#include <string>
#include <iostream>

class Job {
    std::string job_name;
    int hours_to_finish, budget;
public:
    Job(const std::string& name, int hours, int budget) : job_name(name), hours_to_finish(hours), budget(budget) {}
    friend int operator*(const Job& job);
    friend int operator+(const Job& job);
    friend std::ostream& operator<<(std::ostream& os, const Job& job);
};


#endif //OOP1DZ2V3_JOB_H