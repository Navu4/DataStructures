#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int saving;
    cin >> saving;

    if(saving > 5000){
        if (saving > 10000)
        {
            cout<<"Roadtrip with neha\n";
        } else {
            cout<<"Shopping with neha\n";
        }
    } else if(saving>2000){
        cout<<"Rashmi\n";
    }   else
    {
        cout<<"Friends\n";
    }
    
}