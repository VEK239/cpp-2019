#include "mylib.h"

int main()
{
#ifndef NAME
#define NAME ""
#endif
    hello("Xex");
    hello(NAME);
    here();
    bye();
    return 0;
}
