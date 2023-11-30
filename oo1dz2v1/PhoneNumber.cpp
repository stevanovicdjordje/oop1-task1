#include "PhoneNumber.h"

bool PhoneNumber::operator==(const PhoneNumber &phone_number){
    if (id_country == phone_number.id_country && country_code == phone_number.country_code &&
        user_number == phone_number.user_number) {
        return true;
    }
    return false;
}


std::ostream &operator<<(std::ostream &os, const PhoneNumber &phone_number) {
    os << '+' << phone_number.id_country << ' ' << phone_number.country_code << ' ' << phone_number.user_number;
    return os;
}
