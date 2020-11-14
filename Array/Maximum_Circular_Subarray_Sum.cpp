// Maximum Circular Sum Subarray

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

int kadane(int arr[], int n){
    int currentsum = 0;
    int maxSum =INT_MIN;
    for( int i = 0 ; i < n ; i++){
        currentsum += arr[i];
        if(currentsum < 0){
            currentsum = 0;
        }
        maxSum = max(maxSum,currentsum);
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);

    int totalsum = 0;
    for(int i = 0 ; i < n ; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    
    wrapsum = totalsum + kadane(arr,n);

    cout<< max(wrapsum, nonwrapsum) <<endl;

    return 0;
}