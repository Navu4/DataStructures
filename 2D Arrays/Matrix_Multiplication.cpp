//  Matrix Multiplication

// Problem
// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
// multiply these matrices and output the multiplied matrix.

// Constraints:
// 1 <= n <= 2500  ---------------------> Time Complexity O(n^3) 
// -------> Time Complexity O(n^2.8074) using Strassen's Method (ADA Sem 5)
// 1 <= n1,n2,n3 <= 1,000

#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin >> n;

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;

    int a[n1][n2] , b[n2][n3] , c[n1][n3];
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n2 ; i++){
        for(int j = 0 ; j < n3 ; j++){
            cin >> b[i][j];
        }
    }

    // ---------------------------------------------------------
    //     Approach
    // 1. Make a nested loop of order 3. In the outer loop iterate over rows of
    // the first matrix and in the inner loop iterate over columns of the
    // second matrix.
    // 2. Multiply rows of the first matrix with columns of the second matrix in
    // the innermost loop and update in the answer matrix.
    // --------------------------------------------------------

    // int sum;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         sum = 0;
    //         for( int k = 0; k < n ; k++){
    //             sum += a[i][k] * b[k][j];
    //         }
    //         c[i][j] = sum;
    //     }
    // }
    int sum;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n3 ; j++){
            sum = 0;
            for( int k = 0; k < n2 ; k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }




    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n3 ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}