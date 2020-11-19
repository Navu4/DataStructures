// 2D matrix Search

// Problem
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Constraints
// 1 <= N,M <= 1,000
#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;


    int a[n1][n2];
    for(int i =0; i < n1 ; i++)
    {
        for(int j =0; j < n2 ; j++){
            cin >> a[i][j];
        }
    }

    int key;
    cin >> key;

    // --------------------------------------------------------- 
    // Brute Force Approach
    // Linear search in a 2D Array.
    // Time complexity : O(N*M)

    //--------------------------------------------------------- 
    // for(int i =0; i < n1 ; i++){
    //     for(int j =0; j < n2 ; j++){
    //         if(a[i][j] == key){
    //             cout << "Element Found "<< endl;
    //             cout << i << " " << j << endl;
    //             cout << 1 << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "Element not found" << endl;
    // cout << 0 <<endl;

    // ---------------------------------------------------------

    //     Optimised Approach [IMP]
    // 1. Start from the top right element.
    // 2. You are at (r,c)
    // if(matrix[r][c] == target)
    // return true
    // If (matrix[r][c] > target)
    // c--
    // else
    // r++;
    // At (r,c), you can go to (r-1,c) or (r,c-1), depending on the value of matrix[i][j] and target.


    // Time complexity : O(N + M)

    // -------------------------------------------------------------
    bool found = false;
    int r = 0, c = n1 - 1;
    while( r < n2 && c >=0 ){
        if(a[r][c] == key){
            found = true;
        }
        a[r][c] > key ? c-- : r++ ;
    }
    if(found){
        cout << "Found";
    }
    else {
        cout << " Not found"; 
    }
    return 0;
}