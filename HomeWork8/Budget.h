//
// Created by 1123085 on 11.05.2019.
//

#ifndef HOMEWORK8_BUDGET_H
#define HOMEWORK8_BUDGET_H

#include <vector>
#include "Cause.h"
#include "Event.h"
class Budget
{
public:
    Budget();
    Budget(int budget);
    std::vector<int> fundActivity() const;
    int printDetails() const;
    void awardMoney(const Message* cause);
    void payMoney(const Message* event);
private:
    std::vector<int> mChanges;
    int mBudget;
};


#endif //HOMEWORK8_BUDGET_H
