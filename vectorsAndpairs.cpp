#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    // vector<pair<int, string>> studentDetails = {{1, "Gautam"}, {2, "Ashok"}, {3, "Pathan"}, {4, "Yushuf"}};
    // vector<pair<int, string>>::iterator itr;
    // itr = studentDetails.begin();

    // for (int i = 0; i < studentDetails.size(); i++)
    // {
    //     cout << studentDetails[i].first << " " << studentDetails[i].second << endl;
    // }

    // studentDetails.push_back({5, "Harkeerat"});
    // studentDetails.push_back(make_pair(6, "Manuel"));
    // studentDetails.erase(studentDetails.begin() + 5);

    // for (int i = 0; i < studentDetails.size(); i++)
    // {
    //     // cout << studentDetails[i].first << " " << studentDetails[i].second << endl;
    //     cout << studentDetails.at(i).first << " " << studentDetails.at(i).second << endl;
    // }

/*      WAP WHICH TAKE A PAIR OF INTEGER AS A INPUT IN A VECTOR AND PRINT SUM OF IT'S SECOND ELEMENT    */

    // vector<pair<int, int>> numbers = {{0,1},{1, 2}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};
    // int sum = 0;
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //      cout << numbers[i].second << endl;
    //      sum += numbers[i].second;
    // }
    // cout << sum;

    vector<int> v[3];

    for (int i = 0; i < 3; i++)
    {
        int n;
        cout << "Enter the size of Vector " << i + 1 << ": " << endl;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v[i].push_back(a);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        // cout << "Number of elements inside the vector " << i + 1 << " is " << v[i].size() << endl;
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}