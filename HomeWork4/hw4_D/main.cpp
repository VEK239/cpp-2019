#include <fstream>

int main()
{
    std::ifstream fin("crosswords.in");
    std::ofstream fout("crosswords.out");
    std::string words[4];
    long long crossCount = 0;
    for (int i = 0; i < 4; ++i)
    {
        fin >> words[i];
    }
    for (int w1 = 0; w1 < 4; ++w1)
    {
        for (int w2 = 0; w2 < 4; ++w2)
        {
            if (w1 == w2)
            {
                continue;
            }
            for (int w3 = 0; w3 < 4; ++w3)
            {
                if (w2 == w3 || w1 == w3)
                {
                    continue;
                }
                for (int w4 = 0; w4 < 4; ++w4)
                {
                    if (w1 == w4 || w2 == w4 || w3 == w4)
                    {
                        continue;
                    }
                    std::string up = words[w1];
                    std::string left = words[w2];
                    std::string down = words[w3];
                    std::string right = words[w4];
                    for (unsigned int i = 0; i < up.length(); ++i)
                    {
                        for (unsigned int j = i + 1; j < up.length(); ++j)
                        {
                            unsigned long long maxDelta = left.length() < right.length() ? left.length() : right.length();
                            for (unsigned int k = 1; k < maxDelta; k++)
                            {
                                int delta = j - i;
                                for (unsigned int currD = 0; currD + delta < down.length(); ++currD)
                                {
                                    int leftCount = 0;
                                    int rightCount = 0;
                                    for (unsigned int m = 0; m + k < left.length(); ++m)
                                    {
                                        if (left[m] == up[j]  && left[m + k] == down[currD + delta])
                                        {
                                            ++leftCount;
                                        }
                                    }
                                    for (unsigned int m = 0; m + k < right.length(); ++m)
                                    {
                                        if (right[m] == up[i] && right[m + k] == down[currD])
                                        {
                                            ++rightCount;
                                        }
                                    }
                                    crossCount += rightCount * leftCount;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    fout << crossCount;
}
