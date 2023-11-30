#ifndef OO1DZ2V1_PHONENUMBER_H
#define OO1DZ2V1_PHONENUMBER_H

#include <iostream>
#include <string>


class PhoneNumber {
    std::string id_country;
    std::string country_code;
    std::string user_number;

public:
    PhoneNumber(const std::string& id_country, const std::string& country_code, const std::string& user_number) : id_country(id_country),
                                                                                 country_code(country_code),
                                                                                 user_number(user_number) {};
    bool operator==(const PhoneNumber& phone_number);
    friend std::ostream& operator<<(std::ostream& os, const PhoneNumber& phone_number);
};

#endif //OO1DZ2V1_PHONENUMBER_H
