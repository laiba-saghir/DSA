#include<iostream>
using namespace std;
 
int func(int n)
{
    if(n==0)
        return 0;
    else
        return n + func(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout << n << endl;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<func(n);
    return 0;
}