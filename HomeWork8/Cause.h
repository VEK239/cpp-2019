//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_CAUSE_H
#define HOMEWORK8_CAUSE_H

#include <iostream>
#include "Message.h"
class Cause: public Message
{
public:
    std::string printDetails() const override;
    Cause(std::string name, int amountAwarded, std::string description = "---");
};


#endif //HOMEWORK8_CAUSE_H
