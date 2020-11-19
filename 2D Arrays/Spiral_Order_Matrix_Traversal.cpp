// Spiral Order Matrix Traversal

// Problem: We have to print the given 2D matrix in the spiral order. Spiral Order means that firstly, first row is printed, then last column is printed, then last row is printed and then first column is printed, then we will come inwards in the similar way.

// Algorithm: (We are given 2D matrix of n X m ).
// 1. We will need 4 variables:
//     a. row_start - initialized with 0.
//     b. row_end - initialized with n-1.
//     c. column_start - initialized with 0.
//     d. column_end - initialized with m-1.
// 2. First of all, we will traverse in the row row_start from column_start to column_end and we will increase the row_start with 1 as we have traversed the starting row.
// 3. Then we will traverse in the column column_end from row_start to row_end and decrease the column_end by 1.
// 4. Then we will traverse in the row row_end from column_end to column_start and decrease the row_end by 1.
// 5. Then we will traverse in the column column_start from row_end to row_start and increase the column_start by 1.
// 6. We will do the above steps from 2 to 5 until row_start <= row_end and column_start <= column_end.
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

    // Spiral Order print
    int row_start = 0;
    int column_start = 0;
    int row_end = n-1;
    int column_end = m-1;

    while((row_start <= row_end) && (column_start <= column_end)){

        //  for row_start
        for( int col = column_start; col <= column_end ; col++){
            cout << a[row_start][col]<< " ";
        }
        row_start++;

        //  for column_end
        for( int row = row_start; row <= row_end ; row++){
            cout << a[row][column_end]<< " ";
        }
        column_end--;

        //  for row_end
        for( int col = column_end; col >= column_start ; col--){
            cout << a[row_end][col] << " ";
        }
        row_end--;
        //  for col_start
        for( int row = row_end; row >= row_start ; row--){
            cout << a[row][column_start]<< " ";
        }
        column_start++;
    }

    return 0;
}