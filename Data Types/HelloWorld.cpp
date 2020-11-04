#include<iostream>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    // cout << "Hello World\n";
    // return 0;

    // cout << "--------------------------------------------------";

    // // <<  --> Extraction operator
    // // >>   --> Insertion operator
    int amount1 , amount2 ;
    
    cin >> amount1;
    cin >> amount2;

    int sum = amount2 + amount1 ;
    cout << sum;

    return 0;
}