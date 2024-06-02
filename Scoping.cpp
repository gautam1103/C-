#include<iostream>
using namespace std;
int reused = 42;
int main()
{
    int unique = 0;
    cout << reused << " " << unique << endl;
    int reused = 9;
    cout << reused <<" " << unique<<endl;
    cout << ::reused<< " " << unique << endl; // It will print the scope value 42
    return 0;
}