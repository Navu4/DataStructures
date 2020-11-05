// Ques1. Program to find sum of natural numbers till n.

#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    int n,sum=0; 
    cin>>n;

    while (n>0){
        sum +=n;
        n--;
    }
    cout<<sum;

    return 0;
}