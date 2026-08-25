#include<iostream>
using namespace std;
 // sirf yeh ek array — dono functions isay hi use karenge
bool func(int i,string s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    return func(i+1,s);
}

int main(){
string s = "madam";
cout << func(0,s);
return 0;
}