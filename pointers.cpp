#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
/*	int a = 10;
	int *p = &a;
	cout << a << endl;
	cout << "using pointer " << p << endl;*/
	//int s[5] = {1,2,3,4,5};
	int *p;
     p = new int[5];

	for(int i=0;i<5;i++){
		cout << p[i] << endl;
	}
	delete[] p;
	return 0;
}