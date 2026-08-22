#include <iostream>
#include<array>
using namespace std;

int main() {
   int basic[3] = {1,2,3};
   array<int,4> a = {1,2,3,4};
//printing size of array
   int size = a.size();
   for(int i=0;i<size;i++){
      cout << a[i] << endl;
   }
//looking for element
cout << "element at second index-> " << a.at(2) << endl;

//returning bolean
cout << "empty or not-> " << a.empty() << endl;

//for first elemnt
cout << "first element->" << a.front() << endl;

//for last eleent
cout << "last element->" << a.back() << endl;

}