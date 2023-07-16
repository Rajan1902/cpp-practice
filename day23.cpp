// Day 23 coding Statement : Write a program to Replace all 0’s with 1 in a given integer

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int n2 = 0;
    int ans = 0;
    if(n == 0)
        n2 = 1;
    else{
        while(n>0){
            int temp = n%10;
            if(temp == 0){
                temp = 1;
            }
            n2 = (n2*10) + temp;
            n = n/10;
    }
    while(n2>0){
        int temp = n2%10;
        ans = (ans*10) + temp;
            n2 = n2/10;
    }

    }
    cout<<ans;
    return 0;
}