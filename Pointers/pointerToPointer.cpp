#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;

    cout << a << " " << ptr << endl;
    cout << &a << " " << *ptr << endl;

    int** q = &ptr;
    cout << *q << " " << **q
    << endl;

    
    return 0;
}