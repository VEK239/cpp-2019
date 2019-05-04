#include <iostream>

void printNum(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << 9;
    }
    std::cout << " ";
}


int main()
{
    int n = 0;
    std::string number;
    std::cin >> number;
    int len = (int)number.length();
    for (int i = 0; i < len - 1; ++i)
    {
        n += (int(number[i]) - 0x30) * 2;
    }
    if (number[len - 1] != '0')
    {
        n += 1;
    }
    std::cout << n << "\n";
    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = 0; j < int(number[i]) - 0x30; ++j)
        {
            printNum(len - i - 1);
            std::cout << 1 << " ";
        }
    }
    if (number[len - 1] != '0')
    {
        std::cout << number[len - 1];
    }
}