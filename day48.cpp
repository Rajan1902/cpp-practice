// Day 48 coding Statement : Write Program to remove duplicate elements in an array

// Description

// Get an array as input from the user and then remove all the duplicate elements in that array.

// Input

// Enter the size of array

// 5

// Enter the elements of array

// 35 35 45 60 60

// Output

// 35 45 60

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
int removeDuplicate(int arr[], int n){
    if(n == 0 || n == 1){
        return n;
    }
    int j = 0;
    int temp[n];
    for(int i = 0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n-1];
    for(int i = 0; i<j; i++){
        arr[i] = temp[i];
    }
    return j;

}
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    int temp = removeDuplicate(arr, n);
    for(int i = 0;i<temp; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}