#include <iostream>

char* resize(const char* str, int size, int new_size)
{
    char* newStr = new char[new_size];
    if (size > new_size)
    {
        size = new_size;
    }
    for (int i = 0; i < size; ++i)
    {
        newStr[i] = str[i];
    }
    delete[] str;
    return newStr;
}

void test(int testCount)
{
    std::cout << "========== start testing resize ==========\n\n";
    int passedTestsCount = 0;
    int currTestSize = 10;
    for (int i = 0; i < testCount; ++i)
    {
        char* correctAnswer = new char[currTestSize];
        char* testString = new char[currTestSize];
        int newSize = std::rand() % 50;
        for (int j = 0; j < currTestSize; ++j)
        {
            correctAnswer[j] = char(std::rand() % 26 + 97);
            testString[j] = correctAnswer[j];
        }
        testString = resize(testString, currTestSize, newSize);
        int bound = std::min(currTestSize, newSize);
        for (int j = 0; j < bound; ++j)
        {
            if (testString[j] != correctAnswer[j])
            {
                std::cout << "Test " << passedTestsCount + 1 << " failed.\n";
                std::cout << "Expected: " << correctAnswer << "\n";
                std::cout << "Got: " << testString << "\n";
                std::cout << "Passed " << passedTestsCount << " out of " << testCount << "\n\n";
                delete[] testString;
                delete[] correctAnswer;
                return;
            }
        }
        delete[] testString;
        delete[] correctAnswer;
        ++currTestSize;
        ++passedTestsCount;
    }
    std::cout << "Successfully finished testing. Passed: " << passedTestsCount << " tests out of " <<
              passedTestsCount << "\n\n";
    std::cout << "========== finished testing resize ==========\n";
}

int main()
{
    int n;
    std::cout << "Enter testCount for testing resize:\n";
    std::cin >> n;
    test(n);
}