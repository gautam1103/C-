#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<char> name;
    vector<int> age;
    vector<int> nums(10, 5);
    vector<int> nums2(4);
    fill(nums2.begin(), nums2.end(), 7);


    vector<int> nums3 = {3, 4, 5, 6, 7, 8, 59};
    vector<int> nums4(nums3.begin(), nums3.end());

    //cout << nums3.at(4) << endl;
    //cout << nums3.at(9) << endl; // It will provide Bonds

    vector<int> nums5(3);
    for (int i = 0; i < nums5.size(); i++)
    {
        cin >> nums5[i];
    }
    nums5.at(1) = 100; //MOdified the element
    cout << "**********************" << endl;
    for (int i = 0; i < nums5.size(); i++)
    {
        
        cout << nums5[i] << endl;
    }
    
    // int value;
    // for (int i = 0; i < 3; i++){
    //     cout << "Enter the value: "<< endl;
    //     cin >> value;
    //     age.push_back(value);
    // }
    //cout << "Size of age vector : " << nums.size() << endl;
    //cout << "Capacity of age vector : " << nums.capacity() << endl;
    // cout << age[0];

    return 0;
}