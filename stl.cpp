//#include "bits/stdc++.h";

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<stack>
#include<list>
#include<queue>


using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.push_back(1);
    //  It is quiet faster than push_back
    v.emplace_back(7); 
    // for (vector<int>::iterator it=v.begin(); it != v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    // "vector<int>:: iterator" is simillar to "auto"
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it<<" ";
    // }

    // list<int> ls;
    // ls.push_back(3);
    // ls.push_front(2);

    // for(auto l : ls){
    //     cout << l << " ";
    // }

    stack<int> st;
    st.push(45);
    st.emplace(55);
    //cout << st.top() << endl;
    //st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    // st.top();

    queue<int> q;
    q.push(39);
    q.push(939);
    q.push(9);
    q.push(309);
    q.emplace(90);

    cout << q.size() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back()+100 << endl;
   

    //Max Heap
    priority_queue<int> pq;
    pq.push(33);
    pq.push(99);
    pq.push(10);
    pq.push(7);

    cout << pq.top() << endl;

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(56);
    pq1.push(506);
    pq1.push(50);
    pq1.push(516);
    pq1.push(561);

    cout<<pq1.top();

    // set will everything 
    return 0;
}
