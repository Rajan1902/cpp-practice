// Day 32 coding Statement : Write a Program to Remove vowels from a string

// Description

// Get a string as the input from the user and then remove all the vowel letters from the string and give the output.

// Input

// remove

// Output

// rmv
#include <iostream>
#include <string.h>
using namespace std;
int check_vowel(char c)
{ 
 switch(c)
 {
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':
 case ' ':
 return 1;
 default:
 return 0;
 }
}
int main()
{
 char s[50], t[50];
 int i, j = 0; 
 cout<<"Enter a string: ";
 cin>>s;
 for(i = 0; s[i] != '\0'; i++) 
 {
 if(check_vowel(s[i]) == 0) 
 {
 t[j] = s[i];
 j++;
 }
 }
 t[j] = '\0';
 cout<<t;
 return 0;
}
