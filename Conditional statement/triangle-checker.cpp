#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int sidea, sideb, sidec;
    cin>>sidea>>sideb>>sidec;

    if (sidea == sideb && sideb == sidec){
        cout << "This is an equilateral triangle. \n ";
    }
    else if (sidea == sideb || sidea == sidec || sideb == sidec){
        cout << "This is an isosceles triangle. \n ";
    }
    else{
        cout << "This is a scalene triangle. \n ";
    }
    return 0;
}