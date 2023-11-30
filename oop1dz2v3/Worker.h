#ifndef OOP1DZ2V3_WORKER_H
#define OOP1DZ2V3_WORKER_H

class Worker {
    int salary_per_hour, hours_per_day;
public:
    Worker(int salary, int hours) : salary_per_hour(salary), hours_per_day(hours) {}
    int operator*() const;
    int operator+() const;
};

#endif //OOP1DZ2V3_WORKER_H
