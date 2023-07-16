// Day 9 coding Statement : Write a program to find Number of digits in an integer

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"number of digits are : 1";
    }
    else{
        int ans = 0;
        while(n>0){
            n = n/10;
            ans++;
        }
        cout<<"number of digits are: "<<ans;
    }

    return 0;
}