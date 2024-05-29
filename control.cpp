#include <iostream>
using namespace std;

int main()
{
   /* int x;
    cout << "Enter your Budget" << endl;
    cin >> x;
    if(x>=100)
        cout << "Go to startBucks " << endl;
    else
        cout << "Go to Home " << endl;*/

    /*else-if Ladder*/

   /*int x = 5, y = 10, z = 9;
    
   if (x>y && x>z)
       cout << "x is Maximum " << endl;
   else if (y > x && y > z)
       cout << "y is Maximum " << endl;
   else
       cout << "z is Maximum " << endl;*/

   int money, partner_age;

   cout << "Enter money " << endl;
   cin >> money;
   if (money>=1000)
   {
       cout << "Enter your parnter age " << endl;
       cin >> partner_age;
       if (partner_age>22)
       {
           cout << "Have your wine"<<endl;
       }else{
           cout << "Have your coffee "<<endl;
       }
       
   }
   cout << "Go Home";

   return 0;
}