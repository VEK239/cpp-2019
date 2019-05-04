#include <fstream>
#include <string>
//#include <iostream>
int main()
{
    std::ifstream fin("broken-keyboard.in");
    std::ofstream fout("broken-keyboard.out");
    int n;
    fin >> n;
    std::string directories[1000];
    std::string correctDir[1000];
    for (int i = 0; i < n; ++i)
    {
        fin >> directories[i];
        unsigned long long index = directories[i].length();
        for (unsigned int j = 0; j < directories[i].length() - 1; ++j)
        {
            for (unsigned int k = j + 1; k < directories[i].length(); ++k)
            {
                if (directories[i][j] == directories[i][k])
                {
                    if (index > k)
                    {
                        index = k;
                    }
                }
            }
        }
        correctDir[i] = directories[i].substr(0, index);
        //std::cout << correctDir[i] << "\n";
    }

    fout << "YES\n";

    for (int i = 1; i < n; ++i)
    {
        bool correct = true;
        for (int j = i - 1; j >= 0; --j)
        {
            if (correctDir[j].find(correctDir[i]) == 0)
            {
                correct = false;
                break;
            }
        }
        if (correct)
        {
            fout << "YES\n";
        }
        else
        {
            fout << "NO\n";
        }
    }
}