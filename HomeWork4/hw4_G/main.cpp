#include <iostream>

void printReverse(long long n)
{
    long long x;
    if (n == 0)
    {
        return;
    }
    std::cin >> x;
    printReverse(n - 1);
    std::cout << x << " ";
}

int main()
{
    freopen ("reverse.in","r",stdin);
    freopen ("reverse.out","w",stdout);
    long long n;
    std::cin >> n;
    printReverse(n);
    return 0;
}