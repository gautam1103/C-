#include<iostream>
using namespace std;
int main()
{
    int ival = 43;
    int &pval = ival;

    cout << "ival = " << ival << ", pval = " << pval<<endl;

    pval = 75; // As we are changing here in the pval which is bounded with the ival so that ival will also change
    cout << "New ival = " << ival << ", New Pval = " << pval << endl;

    ival = 90;
    cout << "New ival = " << ival << ", New Pval = " << pval << endl;

    const int i = 42;
    const int &r = i;

    const int &r2 = 43;
    const int &r3 = i * 8;
    cout << i <<" "<< r <<" " << r2 <<" " << r3<< endl;
    return 0;
}
