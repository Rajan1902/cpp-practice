// Day 70 coding Statement : Given an array, rotate the array by one position in clock-wise direction.

// Example 1:

// Input:

// N = 5

// A[] = {1, 2, 3, 4, 5}

// Output:

// 5 1 2 3 4

// Example 2:

// Input:

// N = 8

// A[] = {9, 8, 7, 6, 4, 2, 1, 3}

// Output:

// 3 9 8 7 6 4 2 1

#include<iostream>
using namespace std;

void rotateArray(int n, int arr[]){
    int temp[n];
    temp[0] = arr[n-1];
    for(int i = 1; i<n; i++){
        temp[i] = arr[i-1];
    }
    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    rotateArray(n, arr);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}