// Day 17 coding Statement : Write a program to find the Factors of a number

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            if(i == n){
                cout<<i;
            }
            else
            cout<<i<<",";
        }
    }

    return 0;
}