#include <iostream>
#include "PhoneNumber.h"
#include "Contact.h"

int main() {
    PhoneNumber* number1 = new PhoneNumber("123", "32", "9152221");
    PhoneNumber* number2 = new PhoneNumber("456", "34", "2323232");
    PhoneNumber* number3 = new PhoneNumber("789", "56", "897645");
    PhoneNumber* number4 = new PhoneNumber("999", "89", "0000012");
    PhoneNumber* number5 = new PhoneNumber("444", "79", "1000012");
    PhoneNumber* number6 = new PhoneNumber("665", "59", "4000012");

    Contact contact1("Djordje", number1);
    Contact contact2("Milos", number3);
    Contact contact3("Mihailo", number4);
    contact1 += number2;
    contact2 += number5;
    contact3 += number6;

    if (contact1(number3)) {
        std::cout << "Contact contains number3." << std::endl;
    } else {
        std::cout << "Contact does not contain number3." << std::endl;
    }

    std::cout << contact1 << std::endl;
    std::cout << contact2 << std::endl;
    std::cout << contact3 << std::endl;
    return 0;
}
