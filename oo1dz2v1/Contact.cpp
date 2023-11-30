#include "Contact.h"

Contact::Contact(const Contact &contact) {
    copy(contact);
}

void Contact::copy(const Contact &contact) {
    Node *current_contact = contact.head;
    Node *current_this = nullptr;
    while (current_contact != nullptr) {
        PhoneNumber *new_phone_number = new PhoneNumber(*current_contact->phone_number);
        Node *new_node = new Node(new_phone_number);
        if (current_this == nullptr) {
            head = new_node;
        } else {
            current_this->next = new_node;
        }
        current_this = new_node;
        current_contact = current_contact->next;
    }
}

void Contact::clear() {
    delete head->phone_number;
    delete head;
    head = nullptr;
}

void Contact::move(Contact &contact) {
    name = contact.get_contact_name();
    head = contact.head;
    contact.head = nullptr;
}

Contact &Contact::operator=(const Contact &contact) {
    if (this != &contact) {
        clear();
        copy(contact);
    }
    return *this;
}

Contact::Contact(Contact &&contact) {
    move(contact);
}

Contact &Contact::operator=(Contact &&contact) {
    if (this != &contact) {
        clear();
        move(contact);
    }
    return *this;
}

Contact::~Contact() {
    clear();
}

void Contact::operator+=(PhoneNumber* phone_number) {
    Node* new_node = new Node(phone_number, head);
    head = new_node;
}


std::ostream &operator<<(std::ostream &os, const Contact &contact) {
    Contact::Node* current;
    os << contact.get_contact_name() << " (";
    current = contact.head;
    while (current != nullptr) {
        os << *(current->phone_number);
        if (current->next != nullptr) {
            os << ", ";
        }
        current = current->next;
    }
    os << ")";
    return os;
}

bool Contact::operator()(PhoneNumber *phone_number) const {
    Node* current = head;
    while (current != nullptr) {
        if (current->phone_number == phone_number) {
            return true;
        }
        current = current->next;
    }
    return false;
}

