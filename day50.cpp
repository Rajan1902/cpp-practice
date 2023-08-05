// Day 50 coding Statement : Given an integer array of size N. Write Program to find sum of positive square elements in the array.

// Sample input 1 :

// 4 1 2 3 4

// Sample output 1 :

// 46

// Sample input 2 :

// 4 -1 -2 -3 -4

// Sample output 2 :

// 46


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        ans+= arr[i]*arr[i];
    }
    cout<<ans;
}