// Day 4 coding Statement:  Write a program to identify of the a number is positive or negative

#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a>0){
        cout<<"Positive number";
    }
    else if(a<0){
        cout<<"Negative number";
    }
    else{
        cout<<"Neither positive nor negative";
    }


    return 0;
}