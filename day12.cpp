// Day 12 coding Statement:  Write a program to find Sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin>>n;
    while(n>0){
        ans = ans+(n%10);
        n = n/10;
    }
    cout<<ans;
    return 0;
}
