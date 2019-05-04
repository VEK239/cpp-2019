#include <iostream>

int main()
{
    int n = 9;
    int sudokuResult[9][9];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> sudokuResult[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int k = 1; k < n + 1; ++k)
        {
            bool check = false;
            for (int j = 0; j < n; ++j)
            {
                if (sudokuResult[i][j] == k)
                {
                    check = true;
                }
            }
            if (!check)
            {
                std::cout << "No";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int k = 1; k < n + 1; ++k)
        {
            bool check = false;
            for (int j = 0; j < n; ++j)
            {
                if (sudokuResult[j][i] == k)
                {
                    check = true;
                }
            }
            if (!check)
            {
                std::cout << "No";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i += 3)
    {
        for (int j = 0; j < n; j += 3)
        {
            for (int k = 1; k < n + 1; ++k)
            {
                bool check = false;
                for (int l = i; l < i + 3; ++l)
                {
                    for (int m = j; m < j + 3; ++m)
                    {
                        if (sudokuResult[l][m] == k)
                        {
                            check = true;
                        }
                    }
                }
                if (!check)
                {
                    std::cout << "No";
                    return 0;
                }
            }
        }
    }
    std::cout << "Yes";
    return 0;
}