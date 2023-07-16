// Day 24 coding Statement : Write a program to print Pyramid pattern using stars

#include <iostream>
using namespace std;
int main()
{
 int i, j, k, rows;
 cout<<"Enter number of rows: ";
 cin>>rows;
 for(i=1; i<=rows; i++)
 {
 for(j=i; j<rows; j++)
 cout<<" ";
 for(k=1; k<=(2*i-1); k++)
 cout<<"*";
 cout<<"\n";
 }
 return 0;
}