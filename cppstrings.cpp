#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    str = ("Gautam Kumar");
    string str2(" Mishra");
    //cout << str <<" "<<str2<<endl;
    string str1;
    //cin >> str1; // terminates when whitespace hits
    //getline(cin, str1); // continuesly prints the whole sentence
    // for(char c : str){
    //     cout << c << endl;
    // }
    cout << str + str2 << endl;
    string ::iterator it;
   
    for (it = str.begin(); it != str.end(); it++){
        cout << *it;
    }
    str += ", I'm asking How are you?";
    cout << endl;
    // cout << str;

    cout << str.substr(3, 7);
    return 0;
}