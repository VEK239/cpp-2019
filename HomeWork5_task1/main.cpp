#include <iostream>

void swap_min(int** array, int rows, int cols)
{
    int min = array[0][0];
    int minLine = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                minLine = i;
            }
        }
    }
    int* tmp = *array;
    *array = array[minLine];
    array[minLine] = tmp;
}

void test(int testCount)
{
    std::cout << "========== start testing swapMin ==========\n\n";
    int passedTestsCount = 0;
    int testLength = 10;
    for (int i = 0; i < testCount; ++i)
    {
        int** array;
        int** correctArray;
        array = new int* [testLength];
        correctArray = new int* [testLength];

        for (int j = 0; j < testLength; ++j)
        {
            array[j] = new int[testLength];
            correctArray[j] = new int[testLength];
        }

        int minRow = 0;
        int minCol = 0;
        for (int j = 0; j < testLength; ++j)
        {
            for (int k = 0; k < testLength; ++k)
            {
                array[j][k] = std::rand() % 100;
                if (array[j][k] < array[minRow][minCol])
                {
                    minCol = k;
                    minRow = j;
                }
                correctArray[j][k] = array[j][k];
            }
        }
        std::swap(correctArray[0], correctArray[minRow]);
        swap_min(array, testLength, testLength);

        for (int j = 0; j < testLength; ++j)
        {
            for (int k = 0; k < testLength; ++k)
            {
                if (correctArray[j][k] != array[j][k])
                {
                    std::cout << "Test " << passedTestsCount + 1 << " failed.\n";
                    std::cout << "Passed " << passedTestsCount << " out of " << testCount << "\n\n";
                    for (unsigned int m = 0; m < testLength; ++m)
                    {
                        delete[] array[m];
                        delete[] correctArray[m];
                    }
                    delete[] correctArray;
                    delete[] array;
                    return;
                }
            }
        }
        for (unsigned int j = 0; j < testLength; ++j)
        {
            delete[] array[j];
            delete[] correctArray[j];
        }
        delete[] correctArray;
        delete[] array;
        ++testLength;
        ++passedTestsCount;
    }
    std::cout << "Successfully finished testing. Passed: " << passedTestsCount << " tests out of " <<
              passedTestsCount << "\n\n";
    std::cout << "========== finished testing swapMin ==========\n";
}


int main()
{
    int n;
    std::cout << "Enter testCount for testing swapMin:\n";
    std::cin >> n;
    test(n);
}

