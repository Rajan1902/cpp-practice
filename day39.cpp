// Day 39 coding Statement : Write a Program to check if two strings are Anagram or not

// Description

// Get two strings as input from the user and check whether it is Anagram or not.

// Input

// sunlight thgiluns

// Output

// Anagram
#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char s1[50];
    char s2[50];
    int i = 0;
    char temp1[26] = {0};
    char temp2[26] = {0};
    cin>>s1;
    cin>>s2;
    while(s1[i] != '\0'){
        temp1[s1[i] - 'a']++;
        i++;
    }
    i = 0;
    while(s2[i] != '\0'){
        temp2[s2[i] - 'a']++;
        i++;
    }
    bool flag = true;
    for(int j = 0; j<26; j++ ){
        if(temp1[j] != temp2[j]){
            flag = false;
            break;
        }
    }
    if(flag == 1){
        cout<<"Anagram";
    }
    else
        cout<<"Not an Anagram";
}