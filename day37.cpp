// Day 37 coding Statement : Write a Program to calculate the Frequency of characters in a string

// Description

// Get a string as the input from the user and find the frequency of characters in the string.

// Input

// program

// Output

// The frequency of a is 1

// The frequency of g is 1

// The frequency of m is 1

// The frequency of o is 1

// The frequency of p is 1

// The frequency of r is 2

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
        if(freq[i]!=0){
            printf("The frequency of %c is %d\n", i, freq[i]);

        }
    }
    return 0;
}