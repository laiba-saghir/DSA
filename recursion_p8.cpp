#include<iostream>
using namespace std;
 // sirf yeh ek array — dono functions isay hi use karenge
void func(int i,int a[], int n){
    if(i >= n/2) return;
    swap(a[i], a[n-i-1]);
    func(i+1,a, n);
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];        // seedha global 'a' mein fill karo — koi naya 'a' mat banao
    }

    func(0,a, n);

    for(int i=0; i<n; i++) cout << a[i] << " ";  // result dekhne ke liye

    return 0;
}