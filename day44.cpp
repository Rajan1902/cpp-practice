// Day 44 coding Statement : Write Program to find number of even and odd elements in an array

// Description

// Get an array as input from the user and then count the number of even and odd elements present in the array.

// Input

// Enter size of array

// 4

// Enter the elements :

// 1 3 4 5

// Output

// Number of even elements :

// 1

// Number of odd elements :

// 3

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    int even =0;
    int odd =0;
    int arr[n];
    int coutner = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] %2 == 0){
            even += 1;
        }
        else odd += 1;
    }
    cout<<"Number of even elements: "<<endl<<even<<endl;
    cout<<"Number of odd elements: "<<endl<<odd<<endl;

    return 0;
}
 