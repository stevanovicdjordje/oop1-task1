#ifndef OO1DZ2V1_CONTACT_H
#define OO1DZ2V1_CONTACT_H

#include <iostream>
#include <string>
#include "PhoneNumber.h"

class Contact {
    std::string name;

    struct Node {
        PhoneNumber *phone_number;
        Node *next;

        Node(PhoneNumber *current, Node *next = nullptr) : phone_number(current), next(next) {}
    };

    void clear();

    void copy(const Contact &contact);

    void move(Contact &contact);

    Node *head = nullptr;

public:
    Contact(const std::string &contact_name, PhoneNumber *phone_number) : name(contact_name),
                                                                          head(new Node(phone_number)) {};

    std::string get_contact_name() const { return name; }

    Contact(const Contact &contact);

    Contact &operator=(const Contact &contact);

    Contact(Contact &&contact);

    Contact &operator=(Contact &&contact);

    void operator+=(PhoneNumber *phone_number);

    bool operator()(PhoneNumber *phone_number) const;

    friend std::ostream &operator<<(std::ostream &os, const Contact &contact);

    ~Contact();

};

#endif //OO1DZ2V1_CONTACT_H
