//
// Created by 1123085 on 15.05.2019.
//

#ifndef HOMEWORK8_MESSAGE_H
#define HOMEWORK8_MESSAGE_H

#include <string>

class Message
{
public:
    virtual std::string printDetails() const;
    Message(std::string type, std::string name, int amount, std::string description = "---");
    int getResults() const;
protected:
    int mAmount;
    std::string mType;
    std::string mName;
    std::string mDescription;
};


#endif //HOMEWORK8_MESSAGE_H
