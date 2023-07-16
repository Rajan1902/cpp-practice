// Day 21 coding Statement : Write a program to identify if the number is Palindrome or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num = n;
    int reverse = 0;
    while(num>0){
        int ls = num%10;
        reverse = (reverse*10) + ls;
        num/=10;
    }
    // cout<<reverse;
    if(reverse == n){
        cout<<"Panildrome";
    }
    else cout<<"Not a Panildrome";
    return 0;
}