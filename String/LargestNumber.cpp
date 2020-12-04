#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string num = "3456219";

    cout << num << endl;
    sort(num.begin(),num.end(),greater<int>());
    cout << "Largest Number :" << num << endl;

    return 0;
}