#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);
    v.push_back(8);

    cout << binary_search(v.begin(), v.end(), 3) << endl;
    cout << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a=5,b=10;
    cout << "max is " << max(a,b) << endl;
    cout << "min is " << min(a,b) << endl;
    swap(a,b);
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    string s="abc";
    reverse(s.begin(), s.end());
    cout << "s is " << s << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "after rotation: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "after sorting: ";
    for(int x : v) {
        cout << x << " ";
    }   

}