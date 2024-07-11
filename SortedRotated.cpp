#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool checkAndRotate(vector<int> &nums)
    {
        int n = nums.size();
        int x = 0;               // Count of places where the current number is greater than the next number
        int rotation_point = -1; // Index where the inversion happens

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                ++x;
                rotation_point = i;
            }
        }

        // If the array has more than one inversion point, it cannot be sorted by rotation
        if (x > 1)
        {
            return false;
        }

        // If there's no inversion or exactly one inversion, rotate the array
        if (rotation_point != -1)
        {
            rotateArray(nums, rotation_point + 1);
        }

        return true;
    }

private:
    void rotateArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2}; // Example input

    if (sol.checkAndRotate(nums))
    {
        cout << "Rotated and sorted array: ";
        for (int num : nums)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "The array cannot be rotated to become sorted." << endl;
    }

    return 0;
}
