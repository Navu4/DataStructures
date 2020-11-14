// Maximum Sum Subarray Array

// ---------------------------------------------

// Kadane’s Algorithm:
// Idea: Start taking the sum of the array, as soon as it gets negative, discard
// the current subarray, and start a new sum.
// Time Complexity: O(N)
// Space Complexity: O(1)
// -----------------------------------------

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for( int i =0 ; i < n ;i++){
        currentSum += a[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }

    cout << maxSum << endl;
    return 0;
}