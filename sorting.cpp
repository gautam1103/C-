#include<iostream>
#include<vector>
using namespace std;
// Selection Sort:- Select Minimum and Swap it with the very first sorted index/element.
// Bubble sort :- Push the maximum to the last by adjusting swaps.
// Merge Sort :- Divide and Merge.
// Quick Sort :- Pick a Pivot and place it in it's correct place; 
//               lesser will go into left and greater will go into the right.
int swap(vector<int> &arr, int idx1, int idx2){
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}
void selection_sort(vector<int> &arr, int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i; j <=n - 1; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}
void bubble_sort(vector<int> &arr, int n){
    int did_swap = 0;
    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j <= i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                 did_swap = 1;
            }
        }
        if(did_swap==0){
            break;
        }
        cout << "run"<<endl;
    }
}

void merge(vector<int>&arr, int l, int mid, int h)
{
    vector <int> temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right<=h)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= h;i++){
        arr[i] = temp[i - l];
    }
}
void mergeSort(vector<int>&arr, int l, int h)
{
    int mid = (l + h) / 2;
    if(l>=h)
        return;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);
    merge(arr, l, mid, h);
}
int partition(vector<int>&arr, int l, int h){
    int pivot = arr[l];
    int i = l;
    int j = h;
while(i<j)
{
    while (pivot >= arr[i] && i <= h - 1)
    {
        i++;
    }
    while (pivot < arr[j] && j >= l + 1)
    {
        j--;
    }
    if(j>i)
        swap(arr[j], arr[i]);
}
swap(arr[l], arr[j]);
return j;
}
void quick_sort(vector<int>&arr, int l, int h)
{
    if(l<h){
        int pIndex = partition(arr, l, h);
        quick_sort(arr, l, pIndex - 1);
        quick_sort(arr, pIndex + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //selection_sort(arr, n);
    //bubble_sort(arr, n);
    //mergeSort(arr, 0, n-1);

    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}