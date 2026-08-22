#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout << "top element: " << s.top() << endl;
    s.pop();
     cout << "top element: " << s.top() << endl;

     cout << "size is " << s.size() << endl;
     cout << "is empty " << s.empty() << endl;
}