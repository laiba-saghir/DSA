#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "top element: " << q.front() << endl;
    q.pop();
     cout << "top element: " << q.front() << endl;

     cout << "size is " << q.size() << endl;
     cout << "is empty " << q.empty() << endl;
}