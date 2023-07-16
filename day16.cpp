// Day 16 coding Statement : Write a program to identify if the number is Perfect number or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 1; i<n; i++){
        if(n%i==0){
            // cout<<i<<" ";
            ans = ans + i;
        }
    }
    if(ans == n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;
}