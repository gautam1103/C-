#include<iostream>
#include<string>
using namespace std;
bool pal(int i, string &s)
{
    if(i>=s.size()/2)
        return true;
    if(s[i]!=s[s.size()-i-1]) // Here I am checking the starting index from the last one
        return false;
    return pal(i + 1, s);
}
int main()
{
    string s = "34556677";
    if(pal(0,s)>0)
        cout << "true";
    else
    cout << "false";
}