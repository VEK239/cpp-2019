//
// Created by 1123085 on 14.05.2019.
//

#ifndef HOMEWORK8_FUNDSBALANCE_H
#define HOMEWORK8_FUNDSBALANCE_H


#include <string>

class FundsBalance
{
public:
    std::string printDetails() const;
    void achieveMoney(int value);
private:
    int mBalance = 0;
};


#endif //HOMEWORK8_FUNDSBALANCE_H
