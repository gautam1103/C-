#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    char first_name[20];
    char last_name[15];
    char full_name[30];

    // cout << "Enter your FirstName: " << endl;
    // cin >> first_name;
    // cout << "Enter your LastName: " << endl;
    // cin >> last_name;

    // cout << "Hi " << first_name << " the number of characters in your first name is " << strlen(first_name)
    //      << " and in your last name is " << strlen(last_name) << endl;
   
    // this strcat and strcpy both functions are reading the arguments from right to left
    // strcpy(full_name, first_name);
    // strcat(full_name, " ");    
    // strcat(full_name, last_name);

    // if(strcmp(first_name,last_name)==0)
    //     cout << "Equal" << endl;
    // else
    //     cout << "Both not Equal" << endl;

   // cout <<"Full Name: "<< full_name;

    cout << "Enter your full name " << endl;
    //cin >> full_name; // It will stop whenever it will see the whitespace
    cin.getline(full_name, 30); // It will not get terminate untill the limitation(30) will not fill
    cout << "Full Name: " << full_name;
    return 0;
}