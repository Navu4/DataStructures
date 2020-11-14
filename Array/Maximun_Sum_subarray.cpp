// Maximum Sum Subarray Array

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

    // Brute Force:
    // Idea: For each subarray arr[i..j], calculate its sum.
    // Time Complexity: O(N^3)
    // Space Complexity: O(1)

    // int maxSum = INT_MIN;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = i ; j < n ; j++){
    //         int sum = 0;
    //         for(int k = i ; k <=j ; k++){
    //             sum += a[k];
    //         }
    //         maxSum = max(sum,maxSum);
    //     }
    // }

    // ---------------------------------------------------------------

    //     Prefix Sum Technique:
    // Idea: For each subarray arr[i..j], calculate its sum. Using prefix sum can
    // reduce time to calculate the sum of arr[i..j] to O(1)
    // Time Complexity: O(N^2)
    // Space Complexity: O(N) 
    
    int cumsum[n+1];
    cumsum[0] = 0;
    for(int i = 1; i <= n; i++){
        cumsum[i] = cumsum[i - 1] + a[i -1];
    }
    int maxSum = INT_MIN;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        maxSum = max(maxSum , cumsum[i]);
        for(int j = 1; j <= i; j++){
            sum = cumsum[i] - cumsum[j-1];
            maxSum = max(maxSum , sum);
        }
    }
    cout << maxSum << endl;
    return 0 ; 
}