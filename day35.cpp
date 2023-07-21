// Day 35 coding Statement : Write a Program to Count the sum of numbers in a string

// Description

// Get a string from the user and find the sum of numbers in the string.

// Input

// Hello56

// Output

// 11

#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char s[50];
    cin>>s;
    int i = 0;
    int ans = 0;
    while(s[i] != '\0'){
        if(s[i]>= 48 && s[i]<= 57){
            ans += s[i] - 48;
        }
        i++;
    }

    cout<<ans;

    return 0;
}