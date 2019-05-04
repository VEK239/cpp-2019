#include <iostream>

char* getline()
{
    const int DELTA = 50;
    char* currentString = (char*) malloc(DELTA * sizeof(char));
    size_t currentStringLength = DELTA;
    char token;
    int tokenCount = 0;
    while (std::cin.get(token) && token != '\n')
    {
        if (tokenCount == currentStringLength)
        {
            currentStringLength += DELTA;
            currentString = (char*) realloc(currentString, currentStringLength);
        }
        currentString[tokenCount++] = token;
    }
    char* resultString = (char*) malloc((tokenCount + 1) * sizeof(char));
    for (int i = 0; i < tokenCount; ++i)
    {
        resultString[i] = currentString[i];
    }
    resultString[tokenCount] = '\0';
    delete[] currentString;
    return resultString;
}

void test(int testCount)
{
    std::cout << "========== start testing getline ==========\n\n";
    int passedTestsCount = 0;
    int currTestSize = 10;
    for (int i = 0; i < testCount; ++i)
    {
        char* correctAnswer = new char[currTestSize + 1];
        std::cin.clear();
        std::cin.putback('\0');
        correctAnswer[currTestSize] = '\0';
        for (int j = 0; j < currTestSize; ++j)
        {
            char c = char(std::rand() % 26 + 97);
            correctAnswer[currTestSize - 1 - j] = c;
            std::cin.putback(c);
        }
        char* testString = getline();
        for (int j = 0; j < currTestSize; ++j)
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
    std::cout << "========== finished testing getline ==========\n";
}

int main()
{
    //getline();
    test(1000);
}