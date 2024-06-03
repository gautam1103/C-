#include<iostream>
using namespace std;
int main()
{
    constexpr int z = 43333;
    int val = 90;
    int *p = &val;

    cout << "Val = " << val << ", *p = " << p << ", p = " << *p << endl;

    *p = 92;

    cout << "Val = " << ", New *p = " << p << ", New p = " << *p << endl;

    val = 97;

    cout << "Val = " << ", Newer *p = " << p << ", Newer p = " << *p << endl;
    double pd;
    double *pd2 = &pd;
    double *pd3 = pd2;
    /*Null Pointers : Not pointing to any object*/
    int *ptr = nullptr;
    int *ptr2 = NULL;
    int *ptr3 = 0;

    //const int value = 99; // Now No-One can change it's value , and it can be accesible in this file only
    extern const int value; // Now value is shared among every files, so we can access it from anywhere
    const double pi = 3.14;
    const double *ptr4 = &pi;
    cout << ptr4 << endl;
    double dval = 4445;
    ptr4 = &dval;
    return 0;
}