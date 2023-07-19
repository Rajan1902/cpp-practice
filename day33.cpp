// Day 33 coding Statement : Write a Program to check if String is a palindrome or not

// Description

// Get an input string from the user and then check whether it is a palindrome string or not.

// Input

// noon

// Output

// Palindrome

// Input

// Talent

// Output

// Not a Palindrome
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int mid = s.length()/2;
    bool flag = true;
    // cout<<mid;
    for(int i = 0; i<mid; i++){
        if(s[i]!=s[s.length()-1-i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Palindrome";
    }
    else
    cout<<"Not a Palindrome";
    return 0;
}