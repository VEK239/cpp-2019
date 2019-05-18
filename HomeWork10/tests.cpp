//
// Created by 1123085 on 17.05.2019.
//
using namespace std;

#include "tests.hpp"

void test0()
{
    cout << endl << "*****Test 0(flatten)**********" << endl;
    Array<int> ints(2, 0);
    ints[0] = 10;
    ints[1] = 20;
    flatten(ints, std::cout);
    std::cout << "\n";
    Array< Array<int> > array_of_ints(2, ints);
    flatten(array_of_ints, std::cout);
    std::cout << "\n";
    Array<double> doubles(10, 0.5);
    flatten(doubles, std::cout);
    std::cout << "\n";
}

void test1()
{
    {
        cout << endl << "*****Test 1(assigment)**********" << endl;
        Array<char> ar(size_t(10), '0');
        Array<char> x(size_t(0), '1');
        ar = x;
        ar.print();
        //std::cout << "ok";
    }
    {
        cout << "*****STRING**********" << endl;
        Array<string> cr(size_t(100), "Str0");
        Array<string> cx(size_t(0), "Str1");
        cr = cx;
        cr.print();

        Array<string> cx2(size_t(2), "Str3");
        cr = cx2;
        cr.print();
    }
    {
        cout << "*****INT**********" << endl;
        Array<int> cr(size_t(100), 0);
        Array<int> cx(size_t(0), 15);
        cr = cx;
        cr.print();

        Array<int> cx2(size_t(2), 55);
        cr = cx2;
        cr.print();
    }
}

void test2()
{
    cout << endl << "*****Test 2(copy constructor)**********" << endl;
    {
        cout << "*****CHAR**********" << endl;
        Array<char> x(size_t(3), '3');
        Array<char> ar(x);
        ar.print();
    }
    {
        cout << "*****STRING**********" << endl;
        Array<string> x(size_t(3), "333");
        Array<string> ar(x);
        ar.print();
    }
}

void test3()
{
    cout << endl << "*****Test 3(Empty)**********" << endl;
    {
        cout << "*****CHAR**********" << endl;
        Array<char> ar(size_t(0), '0');
        ar = ar;
        ar.print();
    }
    {
        cout << "*****STRING**********" << endl;
        Array<string> ar(size_t(0), "0");
        ar = ar;
        ar.print();
    }
}

void test4()
{
    cout << endl << "*****Test 4(assigment A=A) **********" << endl;
    {
        Array<char> ar(size_t(4), '0');
        ar = ar;
        ar.print();
    }
}
void test5()
{
    cout << endl << "*****Test 5(out bound)**********" << endl;
    {
        cout << "*****more**********" << endl;
        Array<char> ar(size_t(4), '0');
        cout << ar[10] << endl;
    }
    {
        cout << "*****less**********" << endl;
        Array<char> ar(size_t(4), '0');
        cout << ar[-10] << endl;
    }
}

void test6()
{
    cout << endl << "*****Test 6(pointer)**********" << endl;
    {
        cout << "*****CHAR(copy)**********" << endl;
        Array<char> *ar = new Array<char>(size_t(4), '4');
        ar->print();
        delete ar;
    }
    {
        cout << "*****CHAR(=)**********" << endl;
        Array<char> *ar = new Array<char>(size_t(5), '5');
        ar->print();
        Array<char> *xr = ar;
        xr->print();
        delete ar;
    }
}
