#include <fstream>

long long gcd(long long a, long long b)
{
    long long tmp;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main()
{
    long long a;
    long long b;
    std::ifstream fin("gcd.in");
    std::ofstream fout("gcd.out");
    fin >> a >> b;
    fout << gcd(a, b);
    fin.close();
    fout.close();
    return 0;
}