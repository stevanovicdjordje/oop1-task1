#ifndef OOP1DZ2V3_FIRM_H
#define OOP1DZ2V3_FIRM_H
#include "Worker.h"
#include <iostream>
#include <string>
#include "Job.h"

class Firm {
    std::string firm_name;
    int percentage;
    struct Node {
        Worker* worker;
        Node* next;
        Node(Worker *current, Node* next = nullptr) : worker(current), next(next) {}
    };
    Node *head;
public:
    Firm() : head(nullptr) {}
    Firm(const Firm& firm) = delete;
    Firm& operator=(const Firm& firm) = delete;
    void operator+=(Worker *worker);
    void set_firm_name(const std::string& name) {
        firm_name = name;
    }
    void set_percentage(int value) {
        percentage = value;
    }
    friend int operator*(const Firm& firm, const Job& job);
    friend float operator+(const Firm& firm, const Job& job);
    friend std::ostream& operator<<(std::ostream& os, const Firm& firm);
    ~Firm();
};

#endif //OOP1DZ2V3_FIRM_H
