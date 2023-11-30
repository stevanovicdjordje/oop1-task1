#include "Job.h"

int operator*(const Job &job) {
    return job.hours_to_finish;
}

int operator+(const Job &job) {
    return job.budget;
}

std::ostream &operator<<(std::ostream &os, const Job &job) {
    os << job.job_name << " " << job.budget << ":" << job.hours_to_finish << "h";
    return os;
}

