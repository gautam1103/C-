#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int>&arr, int ind1, int ind2){
    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;
}
void rev(int i, vector<int> &arr, int n)
{
    if(i>=n/2)
        return;
    swap(arr[i], arr[n - i - 1]);
    rev(i + 1, arr, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rev(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}