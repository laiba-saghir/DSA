#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int> v;
   vector<int> a(5,1);
    cout << "print a" << endl;
    for(int i:a){
        cout << i << " ";
    }



      cout << "size-> " << v.capacity() << endl;
   v.push_back(1);

     cout << "size-> " << v.capacity() << endl;
   v.push_back(2);
     cout << "size-> " << v.capacity() << endl;
   v.push_back(3);
     cout << "size-> " << v.capacity() << endl;
     //for size
     cout << v.size() << endl; 

     cout << "element at secont index" << v.at(2);
     cout << "before pop->";
     for(int i:v)
     {
        cout << i << " ";
     }
     cout << endl;

     v.pop_back();

     cout << "after pop->";
     for(int i:v)
     {
        cout << i << " ";
     }
     cout << endl;
     cout << "before clear: " << v.size() << endl;
     v.clear();
     cout << "after clear: " << v.size() << endl;
     
     

}