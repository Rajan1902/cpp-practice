// Day 45 coding Statement : Write Program to find smallest and largest element in an array

// Description

// Get an array as input from the user and then find the smallest and largest element in the array.

// Input

// Enter the size of array :

// 5

// Enter the elements :

// 10 20 5 40 30

// Output

// Smallest Number :

// 5

// Largest Number :

// 40

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int low = 99999;
    int high = -99999;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>high){
            high = arr[i];
        }
        if(arr[i]<low){
            low = arr[i];
        }
    }
    cout<<"Smallest Number :"<<endl<<low<<endl;
    cout<<"Greatest Number :"<<endl<<high;
    
    return 0;
}