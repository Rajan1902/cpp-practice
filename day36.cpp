// Day 36 coding Statement : Write a Program to Capitalize the first and last letter of each word of a string

// Description

// Get a string from the user and then change the first and last letter to uppercase.

// Input

// programming

// Output

// ProgramminG
#include<iostream>
#include<string.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    s[0] = toupper(s[0]);
    s[s.length()-1] = toupper(s[s.length()-1]);
    cout<<s;
    return 0;
}