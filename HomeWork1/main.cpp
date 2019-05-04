#include <iostream>
#include "addition.h"

int main(int argc, char **argv)
{
    int y;
    std::cout << argv[0] << std::endl;
    if (argc > 1)
    {
        y = int(*argv[1]) - 48;
    }
    else
    {
        y = 1;
    }
    std::cout << square(y);
}
