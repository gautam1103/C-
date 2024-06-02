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
    return 0;
}
