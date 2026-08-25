#include<iostream>
using namespace std;

int a[100];  // sirf yeh ek array — dono functions isay hi use karenge

void func(int l, int r){
    if(l >= r) return;
    swap(a[l], a[r]);
    func(l+1, r-1);
}

int main(){
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        cin >> a[i];        // seedha global 'a' mein fill karo — koi naya 'a' mat banao
    }

    func(0, size-1);

    for(int i=0; i<size; i++) cout << a[i] << " ";  // result dekhne ke liye

    return 0;
}