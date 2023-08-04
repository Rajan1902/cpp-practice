// Day 49 coding Statement : Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and print the minimum scalar product (Dot product) of 2 vectors.

// Sample input 1 :

// 4

// 1 2 3 4

// 5 6 7 8

// Sample output 1 :

// 60

// Explanation :

// (4*5 + 3*6 + 2*7 + 1*8) = 60

// Sample input 2 :

// 4

// -1 -2 -3 -4

// 5 6 -7 -8

// Sample output 2 :

// -17

// Explanation :

// (-1*-8 + -2*-7 + -3*6 + -4*5) = -17

#include<iostream>
using namespace std;

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
    cin>>n;
    int arr1[n];
    int arr2[n];
    int ans = 0;

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    bubblesort(arr1, n);
    bubblesort(arr2, n);
    for(int i = 0;i<n; i++){
        ans+= arr1[i]*arr2[n-i-1];
    }
    cout<<ans;
    return 0;
}