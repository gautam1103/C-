
/*   Addresofindex = Base address + SizeofDataType *(index -lower bond) 
    a[i][i] = BA + [i*n+j]*size
    a[i][j] = BA + [j*m+i]*size
 */

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[15]={0};
    // for (int i = 0; i < 15; i++){
    //     arr[0] = 10;
    //     arr[14] = 150;
    //     cout << arr[i] << endl;
    // }

    // int arr1[5];
    // int arr2[5];
    // int arr3[5];
    // cout << "Enter the elements of arr1 "<< endl;
    // for (int i = 0; i < 5; i++){
    //     cin >> arr1[i];
    // }
    // cout << "Enter the elements of arr2 " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr2[i];
    // }
    // cout << "The elements of the new Array " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //    cout<< (arr3[i] = arr1[i] + arr2[i])<<" ";
    // }

    int i = 0;
    int num = 0;
    int arr[] = {4,1,2,3,1,2,3};

    for (i = 0; i < 7; i++)
    {
        num ^= arr[i];
    }
    cout << num;

    // int nums [] = {1,5,8,9};
    // int target = 19;
    // for(i=0; i<sizeof(nums); i++)
    // {
    //         for(int j=i+1; j<sizeof(nums); j++)
    //         {
    //             if(nums[i]+nums[j]==target)
    //             {
    //                     cout<<i<<" "<<j;
    //             }
    //         }
    // }
    // cout << "No Such Index is present" << endl;

    return 0;
}