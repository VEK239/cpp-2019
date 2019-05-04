#include <iostream>
#include <string>

void hello(std::string name)
{
    if (name == "")
    {
        std::cout << "Hello!\n";
    }
    else
    {
        std::cout << "Hello, " << name << "!\n";
    }
}
