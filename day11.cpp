// Day 11 coding Statement:  Write a program to find Fibonacci series up to n

#include<iostream>
using namespace std;

void fib(int n){
    int a = 0;
    int b = 1;
    cout<<a<<" ";
    if(n<1){
        return;
    }
    for(int i = 0; i<n-1; i++){
        cout<<b<<" ";
        int next = a + b;
        a = b;
        b = next;
        
    }

}

int main(){
    int a = 5;
    fib(a);

    return 0;
}