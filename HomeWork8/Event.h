//
// Created by 1123085 on 12.05.2019.
//

#ifndef HOMEWORK8_EVENT_H
#define HOMEWORK8_EVENT_H

#include <iostream>
#include "Message.h"

class Event: public Message
{
public:
    std::string printDetails() const override;
    Event(std::string name, int amountPaid, std::string description = "---");
};


#endif //HOMEWORK8_EVENT_H
