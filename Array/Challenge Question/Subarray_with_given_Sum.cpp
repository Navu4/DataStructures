#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin >> n >> s;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int i = 0, j = 0;
    int st = -1 , en = -1; // Two Pointers 
    int sum = 0;
    
    while(j<n && (sum +a[j] <= s)){ // sum + a[j] is the sum of all the elements till j th element
        sum += a[j];
        j++;
    } // The value of j left here is Continued

    if(sum == s){
        cout << i+1 << " " << j << endl;
        return 0;
    }
    //Value of j Continued
    while(j<n){
        sum += a[j];
        while(sum > s){
            sum -= a[i];
            i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;

    }
    cout << st << " " << en << endl;
    return 0;
}