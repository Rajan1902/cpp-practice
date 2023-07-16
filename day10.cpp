
// Day 10 coding Statement:  Write a program to find Factorial of a number


#include<iostream>
using namespace std;

int factorial(int n){
    if(n<0){
        return 0;
    }
    else if(n==0 || n==1){
        return 1;
    }
    else{
        return n*(factorial(n-1));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);

    return 0;
}