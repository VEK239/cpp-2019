#include <iostream>
#include "Hydrocarbon.h"

int main()
{
    Hydrocarbon methane(1); //CH4
    Hydrocarbon ethane(2); //CH3CH3
    Hydrocarbon butane(4); //CH3CH2CH2CH3
    Hydrocarbon hexane = ethane + butane; //CH3CH2CH2CH2CH2CH3
    std::cout << methane << std::endl;
    std::cout << ethane << std::endl;
    std::cout << butane << std::endl;
    std::cout << -butane << std::endl; // => isobutane
    std::cout << hexane << std::endl;
    std::cout << ++methane << std::endl; //==ethane
    std::cout << (methane == ethane) << std::endl; //1
    std::cout << methane-- << std::endl; //CH3CH3 => normal methane
    std::cout << !ethane << std::endl; // changing all the extras
    std::cout << (ethane < butane) << std::endl; // 1
    std::cout << (ethane^butane) << std::endl;
    std::cout << butane << ": " << butane[0] << butane[1] << butane[2] << std::endl;
    std::cout << (methane, butane) << std::endl;
}