#include<iostream>
using namespace std;
int main()
{
   /*int n = 54321;
   while(n > 0)
   {
      cout<<n%10;
      n/=10;

   }
   return 0;*/
   int n = 54321;
   int count = 0;
   while(n > 0)
   {
       int dig = n%10;
       count++;
       n/=10;
     
   }
   cout<<"Number of digits: "<<count<<endl;
   return 0;
}