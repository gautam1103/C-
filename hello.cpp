#include <iostream>
using namespace std;

class MyClass{
    public:
        int a;
        void display()
        {
            cout << "America" << endl;
            cout << a << endl;
        }
};

int main()
{
    MyClass m;
    m.a = 40;
    m.display();
    cout<< "Hello"<<endl;
    int x = 10 , y=30;
    cout << (x << 1) << endl; // x << n = x*2^n (x left-shift n)
    cout << (x >> 2) << endl; // x >> n = x/2^n (x right-shift n)

    cout << ((x > y) ? (x+10) : (y-30)) << endl; // ternary operator
    cout<<sizeof(x);
}   