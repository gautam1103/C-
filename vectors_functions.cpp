#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main()
{
    //vector<int> v = {4, 3, 4, 5, 7, 82, 45, 32, 12};
    /* It will Print Array Vector in Normal Sequence Order */
    //vector<int>::iterator itr;
    // for (itr = v.begin()+1; itr != v.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    /* It will Array Vector in Reverse Order */
    // vector<int> :: reverse_iterator rev;
    // for (rev = v.rbegin(); rev != v.rend(); rev++)
    // {
    //     cout << *rev << " ";
    // }
  

    /* size(), max_size(), capacity()*/

    // vector<char> vowels = {'a', 'e', 'i', 'o'};
    // cout << vowels.size() << endl;
    // cout << vowels.max_size() << endl;
    // cout << vowels.capacity() << endl;
    // vowels.push_back('u');
    // cout << vowels.size() << endl;
    // cout << vowels.max_size() << endl;
    // cout << vowels.capacity() << endl;


   /* Enter the value inside the vector and also deleting it.  */
    // vector<int> v;
    // int val;
    // do{
    //     cout << "Enter the value (0 to Exit) : " << endl;
    //     cin >> val;
    //     v.push_back(val);

    // } while (val);
    // cout << "\n*************** Before ****************" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";

    // }
    // cout << "\n***************** After **************" << endl;
    // v.pop_back();
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    //     }

    /* Inserting the element in the vector at the specific position using iterator */

    // vector <int> v = {3, 2, 4, 5, 6, 7, 8, 89};
    // // Defining the iterator "itr"
    // vector <int> ::iterator itr; 
    // cout << "Before Insertion, Size of Vector is : " << v.size() << endl;
    // // Add element at begin, By adding +2, +4....etc. we can decide the position where we wish to insert
    // itr = v.begin();
    // // It will erase the element
    // // v.erase(itr);
    // // It will erase the elements in the range 2nd parameter is Exclusive
    // v.erase(itr, itr+3);
    // // v.insert(iterator, number of times insertion , value which we wish to insert ) /*NOTE : Not a efficient way */
    // // v.insert(itr,3, 5);
    // cout << "After Insertion, Size of Vector is : " << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // // It will delete all the elements of the vector
    // v.clear(); 
    // cout << "\nAfter Clearing, Size of Vector is : " << v.size() << endl;

    /* Q:1 :- WAP which will erase all the Even numbers*/
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // vector<int>:: iterator itr = v.begin();
    //itr = v.begin();
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if(v[i]%2==0)
    //         continue;
    //     cout << v[i] << " ";        
    // }
    // while (itr != v.end())
    // {
    //     if (*itr % 2 == 0)
    //     {
    //         itr = v.erase(itr); // erase returns the next valid iterator
    //     }
    //     else
    //     {
    //         ++itr;
    //     }
    // }

    // for (const int &n : v)
    // {
    //     std::cout << n << " ";
    // }

    /* Q:2 :- WAP to swap these vectors */

    // vector<int> v1 = {1, 2, 3, 4, 5};
    // vector<int> v2 = {11, 12, 13, 14, 15};
    // v1.swap(v2);
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }

    /* Q:3 :- WAP to Short a Vector */

    vector<int> v = {10, 2, -1, 4, 79, 60};
    // sort(starting index, ending index)
    sort(v.begin()+2, v.end());
    for (int i = 2; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}