// Pair Target Sum Problem
// Find whether there exist 2 numbers that sum to K.

#include<iostream>
#include<climits>

using namespace std;

// -----------------------------------------

// Time Complexity - O(n^2)

// -----------------------------------------
// bool pairSum(int arr[],int n,int k){
//     int sum = 0;
//     for(int i = 0 ; i < n-1 ; i++){
//         for(int j = 1; j < n; j++){
//             sum = arr[i] + arr[j];
//             if(sum == k){
//                 cout << i <<" "<< j <<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// -----------------------------------------

// -----------------------------------------

// Time Complexity - O(n)

// -----------------------------------------

bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while(low < high){
        if(arr[low] + arr[high] == k){
            cout << low << " " << high <<endl;
            return true;
        }
        else if(arr[low] + arr[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    int arr[] = {1,2,4,5,6,11,16,19,20,22};
    int k = 31;

    cout << pairSum(arr,10,31);
    return 0;
}