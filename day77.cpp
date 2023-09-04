// Day 77 coding Statement : 

// You are given an array A of N elements. For any ordered triplet (i,j,k) such that i, j, and k are pairwise distinct and 1≤i,j,k≤N, the value of this triplet is (Ai?−Aj?)⋅Ak?. You need to find the maximum value among all possible ordered triplets.

// Note: Two ordered triplets (a,b,c) and (d,e,f) are only equal when a=d and b=e and c=f. As an example, (1,2,3) and (2,3,1) are two different ordered triplets.

// Input Format

// The first line of the input contains a single integer T - the number of test cases. The test cases then follow.
// The first line of each test case contains an integer N.
// The second line of each test case contains N space-separated integers A1?,A2?,…,AN?.
// Output Format

// For each test case, output the maximum value among all different ordered triplets.

// Sample Input

// 3

// 3

// 1 1 3

// 5

// 3 4 4 1 2

// 5

// 23 17 21 18 19

// Sample Output

// 2

// 12

// 126

#include<bits/stdc++.h>
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

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        quickSort(arr, 0, n-1);
        cout<<(arr[n-1]-arr[0])*arr[n-2]<<endl;
    }

    return 0;
}