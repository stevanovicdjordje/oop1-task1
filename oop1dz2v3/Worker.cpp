#include "Worker.h"

int Worker::operator*() const {
    return hours_per_day;
}

int Worker::operator+() const {
    return hours_per_day * salary_per_hour;
}
