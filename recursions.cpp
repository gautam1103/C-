#include<iostream>
//#include <bits/stdc++.h>
using namespace std;
// This function will print from i to n (e.g: 1 to 5)
// void fun(int i, int n){
//     if(i>n)
//     {
//         return;
//     }

//     cout << i<<" ";
//      fun(i + 1, n);
//}
// It will print N to i (e.g: 8 to 2)
// void fun(int i, int n)
// {
//     if (i < n)
//     {
//         return;
//     }
//     cout << i << " ";
//     fun(i - 1, n);
// }

// Print i to n using backtracking
void fun(int i , int n){
    if(i>n)
    {
        return;
    }
    fun(i+1, n);
    cout << i<<" ";
}
//Prints sum from 1 to n
void summ(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    summ(i - 1, sum + i);
}
// It will also print summation from 1 to n but now the function is changed
int addition(int n){
    if(n==0){
        return 0;
    }
    return n + addition(n - 1);
}
// factorial of 4 = 4*3*2*1=24
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
// Reverse the Array using the swap method and recursion
int arr[] = {1, 2, 3, 4, 5};
void swap(int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void rev(int l, int r){
    if(l>=r){
        return;
    }
    swap(l, r);
    rev(l + 1, r - 1);
}
int main()
{

    // fun(1,8);
    // summ(8, 0);
    // cout<<addition(8);
    // cout << fact(3);
    int l = 0;
    int r = 4;
    rev(l,r);
    for (int i = 0; i < 5; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
