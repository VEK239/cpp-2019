#include <utility>

//
// Created by 1123085 on 11.05.2019.
//

#include "Office.h"

std::string Office::printDetails() const
{
    return "Address: " + mAddress + "\nPhone number: " + std::to_string(mPhoneNumber) + "\n";
}

Office::Office(std::string address, int phoneNumber)
{
    mAddress = std::move(address);
    mPhoneNumber = phoneNumber;
}
