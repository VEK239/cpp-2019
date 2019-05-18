#include <utility>

#include <utility>

//
// Created by 1123085 on 12.05.2019.
//

#include "Event.h"

std::string Event::printDetails() const
{
    return "Event's name: " + mName + "\nDescription: " + mDescription + "\nMoney paid: " + std::to_string(mAmount);
}

Event::Event(std::string name, int amountPaid, std::string description):Message::Message("event",
        std::move(name), amountPaid, std::move(description)){}

