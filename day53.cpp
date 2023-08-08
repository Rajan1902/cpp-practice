// Day 53 coding Statement : Given an integer array of size N. Write Program to find maximum product subarray in a given array.

// Sample input 1:

// 4

// 2 -4 -1 -3

// Sample output 1:

// 8 = {2, -4, -1}

// Sample input 2:

// 5

// 1 5 -7 5 3

// Sample output 2:

// 15 = {5, 3}
#include<bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n){
    int ans = arr[0];
    for(int i = 0; i<n; i++){
        int product = arr[i];
        for(int j = i+1; j<n; j++){
            ans = max(ans, product);
            product = arr[j]*product;
        }
        ans = max(ans, product);
    }
    return ans;
}
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxProduct(arr, n);

    return 0;
}