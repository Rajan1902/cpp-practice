// Day 26 coding Statement : Write a program to calculate Maximum number of handshakes

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = n-1; i>=1; i--){
        ans+=i;
    }
    cout<<ans;

    return 0;
}