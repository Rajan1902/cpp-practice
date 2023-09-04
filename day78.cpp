// Day 78 coding Statement : 

// For a given array B1?,B2?,…,BM? of length at least 3, let's define its weight as the largest value of (Bi?−Bj?)⋅(Bj?−Bk?) over all possible triples (i,j,k) with 1≤i,j,k≤M and i!=j, j!=k, k!=i.

// You are given a sorted array A1?,A2?,…,AN? (that is, A1?≤A2?≤…≤AN?).

// Calculate the sum of weights of all contiguous subarrays of A of length at least 3. That is, count the sum of weights of arrays [Ai?,Ai+1?,…,Aj?] over all 1≤i<j≤N with j−i≥2.

// Input Format

// The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains an integer N.
// The second line of each test case contains N space-separated integers A1?,A2?,…,AN?.
// Output Format

// For each test case, print a single line containing the sum of weights of all subarrays of A of length at least 33.

// Sample Input

// 2

// 4

// 1 2 3 4

// 5

// 1 42 69 228 2021

// Sample Output

// 4

// 1041808
#include<bits/stdc++.h>
using namespace std;
int wt(int i,int j,int k)
{
 return (j-i)*(k-j);

}
int main() 
{

 int t;
 cin>>t;
 while(t--){int n;
 cin>>n;
 int A[n];
 for(int i=0;i<n;i++)cin>>A[i];
 int sum=0L;
 for(int i=0;i<n;i++)
 {
 for(int j=i+2;j<n;j++)
 {
  int k=(A[i]+A[j])/2L;
 auto u =upper_bound(A+i+1,A+j-1,k);
 auto l =u-1;
 sum=sum+max(wt(A[i],*u,A[j]),wt(A[i],*l,A[j]));
 }
 }
 cout<<sum<<"\n";
 }
 return 0;
}