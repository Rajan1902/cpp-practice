// Day 40 coding Statement : Write a Program to Replace substring in a string

// Description

// Get a string as input from the user and then get another string which has to be removed from the string.

// Get the third input, the new substring which is placed in that substring position.

// Finally print the output by replacing the substring with new string.

// Input

// Enter a string

// talentbattle

// Enter the substring to be removed :

// talent

// Enter the new substring :

// student

// Output

// The new string :
1
// studentbattle
#include <iostream>
#include <string.h>
using namespace std;
void replace(char str[],char sub[],char nstr[])
{
 int strLen,subLen,nstrLen;
 int i=0,j,k;
 int flag=0,start,end;
 strLen=strlen(str);
 subLen=strlen(sub);

 nstrLen=strlen(nstr);
 for(i=0;i<strLen;i++)
 {
 flag=0;
 start=i;
 for(j=0;str[i]==sub[j];j++,i++)
 if(j==subLen-1)
 flag=1;
 end=i;
 if(flag==0)
 i-=j;
 else
 {
 for(j=start;j<end;j++)
 {
 for(k=start;k<strLen;k++)
 str[k]=str[k+1];
 strLen--;
 i--;
 }
 for(j=start;j<start+nstrLen;j++)
 {
 for(k=strLen;k>=j;k--)
 str[k+1]=str[k];
 str[j]=nstr[j-start];
 strLen++;
 i++;
 }
 }
 }
}
int main()
{
 char str[20],sub[20],nstr[50];
 cout<<"Enter a string: ";
 cin>>str;
 cout<<"Enter the substring to be removed: ";
 cin>>sub;
 cout<<"Enter the new substring: ";
 cin>>nstr;
 replace(str,sub,nstr);
 cout<<"The new string: "<<str<<endl;
 return 0;
}
