//
// Created by 1123085 on 12.05.2019.
//

#ifndef HOMEWORK8_TRUST_H
#define HOMEWORK8_TRUST_H

#include "Office.h"
#include "CEO.h"
#include "Secretary.h"
#include "Director.h"
#include "FundsBalance.h"
#include <vector>
#include "Department.h"

class Trust: public Department
{
public:
    Trust(CEO ceo, Office headOffice, std::string trustName);
    FundsBalance getFundsBalance() const;
    void changeCEO(CEO newCeo);
    CEO getCEO() const;
    void changeHeadOffice(Office office);
    std::string printDetails() const override;
    void getMoney(int value);
private:
    std::string mTrustName;
    std::vector<Office> mOffices;
    CEO mCeo;
    Office mHeadOffice;
    FundsBalance mFundsBalance;
};


#endif //HOMEWORK8_TRUST_H
