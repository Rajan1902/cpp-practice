// Day 13 coding Statement:  Write a program to find Sum of N natural numbers
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans+=i;
    }
    cout<<ans;

    return 0;
}