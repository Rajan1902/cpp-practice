// Day 30 coding Statement : Write a Program to print Length of the string without using strlen() function

// Description

// Get a string as input from user and print the length of the string without using strlen() function.

// Input

// Hello

// Output

// 5

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
 char s[50]={0};
 char c;
 int i=0;
 fgets(s,sizeof(s),stdin);
 while(1)
 {
 c=s[i];
 if(c=='\n')
 break;
 i++;
 }
 cout<<"length of string is: "<<i;
 return 0;
}