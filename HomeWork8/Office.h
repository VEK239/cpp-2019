//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_OFFICE_H
#define HOMEWORK8_OFFICE_H
#include <string>

class Office
{
public:
    Office() = default;
    Office(std::string address, int phoneNumber);
    std::string printDetails() const;
private:
    std::string mAddress;
    int mPhoneNumber;
};


#endif //HOMEWORK8_OFFICE_H
