// Day 43 coding Statement : Write Program to find the array type

// Description

// Get an array as input from the user and check the type of the array, whether it is odd, even or mixed type.

// Input

// Enter size of array :

// 3

// Enter elements 

// 1 3 5

// Output

// Odd
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter elements";
    bool even =0;
    bool odd =0;
    int arr[n];
    int coutner = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] %2 == 0){
            even = 1;
        }
        else odd = 1;
    }
    if(even && odd){
        cout<<"mixed type";
    }
    else if (even){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }


    return 0;
}