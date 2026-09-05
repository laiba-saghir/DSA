#include<iostream>
using namespace std;
int sum(int n){
	if(n == 0)
	   return 0;
	else{
		return sum(n-1)+n;
	}
}
int main(){
	int n;
	cout << "please enter the number of natural numbers you want to add: ";
	cin >> n;
	cout << endl;
	cout << sum(n);
}