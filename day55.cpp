// Day 55 coding Statement : Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and print the sum of maximum scalar product (Dot product) of 2 vectors.

// Sample input 1:

// 4

// 1 2 3 4

// 5 6 7 8

// Sample output 1:

// 70

// Explanation :

// (8*4 + 7*3 + 6*2 + 1*5) = 70

// Sample input 2:

// 4

// -1 -2 -3 -4

// 5 6 -7 -8

// Sample output 2:

// 37

// Explanation :

// (-4*-8 + -3*-7 + -2*5 + -1*6) = 37

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);

    quickSort(arr, p + 1, end);
}

int maxDotProduct(int arr1[], int arr2[], int n){
    quickSort(arr1, 0, n-1);
    quickSort(arr2, 0, n-1);
    int ans = 0;
    for(int i = n-1; i>=0; i--){
        ans += arr1[i]*arr2[i];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    int ans = maxDotProduct(arr1, arr2, n);
    cout<<ans;

    return 0;
}