#include <iostream>
#include <sstream>

long long cards[1000005];
int walls[1000005];

int main()
{
    walls[0] = 0;
    std::istringstream input;
    std::string st;

    std::getline(std::cin, st);
    input.str(st);
    int i = 0;

    for (std::string line; input >> line; )
    {
        cards[i] = std::stoll(line);
        ++i;
    }
    int cardsCount = i;
    input.clear();

    std::getline(std::cin, st);
    input.str(st);
    i = 1;
    for (std::string line; input >> line; )
    {
        walls[i] = std::stoi(line);
        ++i;
    }
    int wallsCount = i;

    for (int j = wallsCount - 1; j >= 0; --j)
    {
        for (int k = walls[j]; k < cardsCount; ++k)
        {
            std::cout << cards[k] << " ";
        }
        cardsCount = walls[j];
    }
}
