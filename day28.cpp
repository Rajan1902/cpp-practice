// Day 28 coding Statement : Write a Program to reverse a string.

#include<iostream>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    // cout<<s1;
    for(int i = s1.length(); i>=0; i--){
        cout<<s1[i];
    }
    return 0;
}