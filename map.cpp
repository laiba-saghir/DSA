#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="abc";
    m[2]="def";
    m[3]="ghi";
    m[4]="jkl";
    m[5]="mno";

    m.insert({{6,"pqr"},
    {7,"stu"},
    {8,"vwx"},
    {9,"yz"}});
    for(auto i:m)
    {
        cout<<i.second<<" " << endl;
    }
}