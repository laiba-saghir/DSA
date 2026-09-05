#include<iostream>
using namespace std;
int pow(int m,int n){
	if(n == 0)
	   return 1;
	else{
		return pow(m,n-1)*m;
	}
}
int main(){
	int n,m;
	cout << "please enter the base number: ";
	cin >> m;
	cout << endl;
	cout << "please enter the exponent number: ";
	cin >> n;
	cout << pow(m,n);
}