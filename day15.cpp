// Day 15 coding Statement : Write a program to identify if the number is Strong number or not

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*(factorial(n-1));
    }
}

int main(){
    // cout<<factorial(5);
    int n;
    cin>>n;
    int temp = n;
    int ans = 0;
    while(n>0){
        ans += factorial(n%10);
        n = n/10;
    }
    if(ans == temp){
        cout<<"Strong Number";
    }
    else cout<<"Not a Strong Number";
    return 0;
}