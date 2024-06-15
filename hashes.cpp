#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];

    }

    // int hash[13] = {0};// example of array hashing
    map<int, int> mpp; // exapmle of real hashing

    for (int i = 0; i < n; i++){
        //hash[arr[i]] += 1; 
        mpp[arr[i]]++; 
    }
        int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
       // cout << hash[number] << endl;
        cout << mpp[number] << endl;
    }
}