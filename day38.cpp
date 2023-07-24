// Day 38 coding Statement : Write a Program to print Non-repeating characters in a string

// Description

// Get a string as the input from the user and print the non-repeating characters in a string.

// Input

// Hello

// Output

// H e o

#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char s[50];
    cin>>s;
    char freq[256] = {0};
    for(int i = 0; s[i] != '\0'; i++){
        freq[s[i]]++;
    }
    for(int i = 0; i<256; i++){
        if(freq[i]==1){
            printf("%c ", i);
            
        }
    }
    return 0;
}