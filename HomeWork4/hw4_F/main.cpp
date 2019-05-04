#include <iostream>
#include <map>
#include <fstream>


int main()
{
    std::ifstream fin("polynomial.in");
    std::ofstream fout("polynomial.out");
    std::map<std::pair<int, int>, int> result;

    int count;
    fin >> count;
    std::string st;

    for (int i = 0; i < count; ++i)
    {
        result.clear();
        fin >> st;
        bool sign = true;
        bool booZero = false;
        int n = 0;
        int m = 0;
        int pref = 0;
        char prevToken;
        char currentToken = '\0';
        char currentCharName = '\0';
        unsigned int j = 0;
        while (j < st.length())
        {
            prevToken = currentToken;
            currentToken = st[j];
            switch (currentToken)
            {
                case '-':
                case '+':
                    if (j != 0)
                    {
                        if (!booZero && pref == 0 && sign)
                        {
                            pref = 1;
                        }
                        if (!booZero && pref == 0 && !sign)
                        {
                            pref = -1;
                        }
                        std::pair<int, int> buff = std::make_pair(n, m);
                        result[buff] += pref;
                        n = 0;
                        m = 0;
                        pref = 0;
                        booZero = false;
                    }
                    sign = st[j] == '+';
                    break;
                case 'n':
                    n += 1;
                    currentCharName = 'n';
                    break;
                case 'm':
                    m += 1;
                    currentCharName = 'm';
                    break;
                case '^':
                case '*':
                    break;
                default:
                    unsigned int index = j;
                    while ('0' <= st[j] && st[j] <= '9')
                    {
                        ++j;
                    }
                    int number = std::stoi(st.substr(index, j - index));
                    --j;
                    if (prevToken == '^')
                    {
                        if (currentCharName == 'n')
                        {
                            n += number - 1;
                        }
                        else if (currentCharName == 'm')
                        {
                            m += number - 1;
                        }
                    }
                    else if (prevToken == '*' || prevToken == 'm' || prevToken == 'n')
                    {
                        if (booZero)
                        {
                            pref *= number;
                        }
                        else
                        {
                            if (sign)
                            {
                                pref = number;
                            }
                            else
                            {
                                pref = -number;
                            }
                            booZero = true;
                        }
                    }
                    else
                    {
                        booZero = true;
                        if (sign)
                        {
                            pref += number;
                        }
                        else
                        {
                            pref -= number;
                        }
                    }
            }
            ++j;
        }
        if (!booZero && pref == 0 && sign)
        {
            pref = 1;
        }
        if (!booZero && pref == 0 && !sign)
        {
            pref = -1;
        }
        std::pair<int, int> buff = std::make_pair(n, m);
        result[buff] += pref;

        bool begin = true;
        for (auto &item: result)
        {
            //std::cout << item.first.first << " " << item.first.second << " " << item.second << "\n";
            if (item.second != 0)
            {
                if (!begin)
                {
                    if (item.second > 0)
                    {
                        fout << '+';
                    }
                }
                if (item.second != 1 && item.second > 0)
                {
                    begin = false;
                    fout << item.second;
                }
                if (item.second == -1)
                {
                    begin = false;
                    fout << '-';
                }
                else if (item.second < 0)
                {
                    begin = false;
                    fout << item.second;
                }
                if (item.first.first > 1)
                {
                    fout << "n^" << item.first.first;
                    begin = false;
                }
                else if (item.first.first == 1)
                {
                    fout << 'n';
                    begin = false;
                }
                if (item.first.second > 1)
                {
                    begin = false;
                    fout << "m^" << item.first.second;
                }
                else if (item.first.second == 1)
                {
                    begin = false;
                    fout << 'm';
                }
                if ((item.second == 1 || item.second == -1) && item.first.first == 0 && item.first.second == 0)
                {
                    begin = false;
                    fout << 1;
                }
            }
        }
        if (begin)
        {
            fout << '0';
        }
        fout << "\n";
    }
}