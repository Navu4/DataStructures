// Searching in a matrix

// Problem: We have to find if value x is present in the 2D array.

//  While traversing in the 2D matrix, just we have to put one if statement which
// checks if(a[i][j] == x) , then x is present otherwise not.

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }

    int key;
    cin >> key;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if( a[i][j] == key){
                cout << "Element Found "<< endl;
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "Element Not Found ";

    return 0;
}