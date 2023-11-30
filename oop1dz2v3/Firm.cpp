#include "Firm.h"
#include <cmath>

void Firm::operator+=(Worker *worker) {
    Node *new_node = new Node(worker, head);
    head = new_node;
}

int operator*(const Firm& firm, const Job& job) {
    float hours_to_finish = 0;
    float hours_in_day = 24;
    Firm::Node *current = firm.head;
    while (current) {
        hours_to_finish += current->worker->operator*();
        current = current->next;
    }
    int total_days = std::ceil(hours_to_finish / hours_in_day);
    return total_days;
}

float operator+(const Firm& firm, const Job& job) {
    int total_wage = 0;
    Firm::Node *current = firm.head;
    while (current) {
        total_wage += current->worker->operator+();
        current = current->next;
    }
    float offer = total_wage * operator*(firm, job) + (total_wage * operator*(firm, job)) * firm.percentage;
    return offer;
}

Firm::~Firm() {
    Node *current = head;
    while (current) {
        Node *temp = current;
        current = current->next;
        delete temp->worker;
        delete temp;
    }
    head = nullptr;
}

std::ostream &operator<<(std::ostream &os, const Firm &firm) {
    Firm::Node *current = firm.head;
    int total_wages = 0, total_workers = 0, total_hours_of_workers = 0;
    while (current) {
        total_workers++;
        total_wages += current->worker->operator+();
        total_hours_of_workers += current->worker->operator*();
        current = current->next;
    }
    os << firm.firm_name << " (" << total_workers << "," << total_wages << ":" << total_hours_of_workers << "h)"
       << std::endl;
    return os;
}
