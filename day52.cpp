// Day 52 coding Statement : Given an integer array of size N, write a program to reverse the array;

// Sample input 1:

// 4

// 2 4 1 3

// Sample output 1:

// 3 1 4 2

// Sample input 2:

// 5

// 1 5 7 5 3

// Sample output 2:

// 3 5 7 5 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        temp[n-i-1] = arr[i];
    }
    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}