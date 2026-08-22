#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,1000);
    l.push_back(1);
    l.push_front(2);
    cout << "printing n" << endl;
    for(int i:n){
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase: " << endl;
    for(int i:l){
        cout << i << " ";
    }
    cout << "size of list " << l.size() << endl;
}