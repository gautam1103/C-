#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int, int> mpp; // exapmle of real hashing
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // int hash[13] = {0};// example of array hashing
    // for (int i = 0; i < n; i++){
    //     //hash[arr[i]] += 1; 
    // }
    //iterator of the map
    for(auto it : mpp){
        cout << it.first<< "->" << it.second << endl;
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