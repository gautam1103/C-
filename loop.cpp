#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // We can add different conditions inside the for loop, different initialization in it also
    // The last condition for the initialization will be consider as termination condition as you can see here
    // j<=8 is the termination condition for the loop
    // for (int  i = 1, j=1; i <= 9, j<=8; i++, j++)
    // {
    //     cout << i << j << endl;
    // }

    // int res=0;

    // for (int i = 1; i <=15; i++)
    // {
    //     if (i%2 != 0)
    //         res += i;
    // }
    // cout << res << endl;

    // int j;
    // cin >> j;
    // while (j)
    // {
    //     cout << j << endl;
    //     j++;
    // }

    // int i;
    // int sum = 0;
    // while (i>0)
    // {
    //     cout << "Enter a number: " << endl;
    //     cin >> i;
    //     if (i>0)
    //         sum += i;
    // }
    // cout << "Sum of the numbers: " << sum << endl;

    // char choice;
    // do
    // {
    //     int x, y,res;

    //     cout << "****************************" << endl;
    //     cout << "1. Addition" << endl;
    //     cout << "2. Subtraction" << endl;
    //     cout << "3. Multiplication" << endl;
    //     cout << "4. Division" << endl;
    //     cout << "Q. Quit" << endl;
    //     cout << "Enter your choice: " << endl;
    //     cin >> choice;

    //     if (choice == '1')
    //     {
    //         cout << "You chose " << choice << "....... Addition" << endl;
    //         cout << "Enter two nums : ";
    //         cin >> x >> y;

    //         res = x + y;
    //         cout << "Addition is: " << res << endl;
    //     }
    //     if (choice == '2')
    //     {
    //         cout << "You chose " << choice << "....... Subtraction" << endl;
    //         cout << "Enter two nums : ";
    //         cin >> x >> y;
    //         res = x - y;
    //         cout << "Subtraction is: " << res << endl;
    //     }
    //     if (choice == '3')
    //     {
    //         cout << "You chose " << choice << "....... Multiplication" << endl;
    //         cout << "Enter two nums : ";
    //         cin >> x >> y;
    //         res = x * y;
    //         cout << "Multiplication is: " << res << endl;
    //     }
    //     if (choice == '4')
    //     {
    //         cout << "You chose " << choice << "........ Division" << endl;
    //         cout << "Enter two nums : ";
    //         cin >> x >> y;
    //         res = x / y;
    //         cout << "Division is: " << res << endl;
    //     }
    //     if (choice == 'q' || choice == 'Q')
    //     {
    //         cout << "Good Bye.....";
    //     }else{
    //         cout << "wrong choice..... Try Again!";
    //     }
    // } while (choice != 'q' && choice != 'Q');
   

    // int a[] = {1, 2, 3, 4, 5};
    // vector <int> x = {2, 3, 4, 5, 6, 72, 4};

    // for(auto b : "gautam Mishra"){
    //     if(b!=' ')
    //     cout << b;
    // }

    // vector<int> num = {3, 6, 15, 17, 18, 21, 55, 100, 200, 300};
    // int count=0;
    // for(int a : num){
    //     if (a%3==0 || a%5==0)
    //     {
    //         count++;
    //     }
        
    // }
    // cout << count;

    // int num, i = 1, sum = 0;
    // int arr[] = {1, 2, 3, 4, 5, -1, 3, -1, 9, 4, -99, 8, 3, 2, 1};
    // for(auto x : arr){
    //     if(x==-99)
    //     break;
    //     else if(x==-1)
    //         continue;
    //     cout << x << endl;
    // }
    // while (i<=5)
    // {
    //     cout << "Enter a number: " << endl;
    //     cin >> num;
    //     i++;
    //     if(num<0)
    //     continue;
    //     sum += num;
       
    // }
    // cout << sum;

    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 10; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    int pairPro;
    int sum = 0;
    int arr [] = {10,1,3,-4,7,5};
    for (int i = 0; i<6; i++){
        for (int j = i+1; j < 6; j++){
            pairPro = arr[i] * arr[j];
            sum += pairPro;
        }
    }
    cout << sum;

    return 0;
}
  
    

   
