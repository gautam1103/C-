#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;
int main()
{
    // Declaration for pair in CPP
    pair<int, string> p1 (22, "Gautam");
    // "make_pair" is the member function of the pair
    auto p2 = make_pair("Mishra", 'G');
    pair<int, float> p3;
    p3 = make_pair(55, 5.5);
    auto p4 = make_pair("Mishraa", 'F');
    pair<int, string> p5(p1);
    p2.swap(p4);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " " << p4.second << endl;
    cout << p5.first << " " << p5.second << endl;
    return 0;
}