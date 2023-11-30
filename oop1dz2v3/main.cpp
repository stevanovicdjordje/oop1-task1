#include <iostream>
#include "Firm.h"

int main() {
    Firm firm1;
    firm1.set_firm_name("FIRM1");
    firm1.set_percentage(12);
    Worker *worker1 = new Worker(10, 8);
    Worker *worker2 = new Worker(12, 6);

    firm1 += worker1;
    firm1 += worker2;

    Job job1("NewJob", 160, 5000);
    std::cout << "Offer: " << firm1 + job1 << std::endl;
    std::cout << "Days to complete job: " << firm1 * job1 << " days" << std::endl;
    std::cout << firm1;
    return 0;
}
