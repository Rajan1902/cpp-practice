// Day 47 coding Statement : Write Program to find longest palindrome in an array

// Description

// Get an array as the input from the user and find the longest palindrome in that array.

// Input

// Enter the size of array

// 3

// Enter the elements of array

// 121 10456 1000001

// Output

// 1000001

#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int x) {
    string convertedNumber = to_string(x);
 
    string reverseString = convertedNumber;
    reverse(reverseString.begin(),reverseString.end());
    return reverseString == convertedNumber ? true : false;
}

void bubblesort(int a[], int n){
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int x = 0;
    cout<<"Enter elements";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    for(int i = n-1; i>=0; i--){
        int temp = arr[i];
        
        if(checkPalindrome(temp)){
            x = 1;
            cout<<arr[i];
            break;
        }
        
    }
    if(x == 0){
        cout<<"No palindrome";
    }
    return 0;
}