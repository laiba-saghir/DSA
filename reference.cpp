#include<iostream>
using namespace std;
int main(){
	int a = 25;
	int &r = a;
	r = 10;
	cout <<  a << endl;
}