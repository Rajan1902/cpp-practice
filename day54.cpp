// Day 54 coding Statement : Given an integer array of size N. Write Program to find whether Arrays are disjoint or not. Two arrays are said to be disjoint if they have no elements in common.

// Sample input 1:

// 4

// 2 -4 -1 -3

// 3

// 1 3 5

// Sample output 1:

// Disjoint

// Sample input 2:

// 5

// 1 5 -7 6 3

// 4

// 2 4 6 8

// Sample output 2:

// Not disjoint. 
#include<bits/stdc++.h>
using namespace std;

bool isDisjoint(int arr1[], int arr2[], int n, int m){
    bool flag = true;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr1[i] == arr2[j]){
                flag = false;
                return flag;
            }
        }
    }
    return flag;
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i =0; i<n; i++){
        cin>>arr1[i];
    }
    int m; 
    cin>>m;
    int arr2[m];

    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    bool flag = isDisjoint(arr1, arr2, n, m);
    if(flag == false){
        cout<<"Not disjoint";
    }
    else{
        cout<<"Disjoint";
    }
    return 0;
}