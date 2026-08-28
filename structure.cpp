#include<iostream>
using namespace std;
struct rectangle{
	int length;
	int breath;
};
int main(){
	struct rectangle r1;
	r1.length = 21;
	r1.breath = 33;
	cout << "length is: "<< r1.length << endl;
	cout << "breath is: " << r1.breath << endl;
	return 0;
}