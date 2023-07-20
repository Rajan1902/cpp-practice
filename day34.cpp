// Day 34 coding Statement : Write a Program to Remove brackets from an algebraic expression

// Description

// Get an algebraic expression as input from the user and then remove all the brackets in that.

// Input

// 7x+(2*y)

// Output

// 7x+2*y

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[50], s2[50];
    cin>>s;
    int i = 0;
    int j = 0;

    while(s[i] != '\0'){
        char c = s[i];
        if(c == '(' || c == ')'){
            i++;
        }
        else{
            s2[j] = c;
            i++;
            j++;
        }
    }
    s2[j] = '\0';
    cout<<s2;
    return 0;
}