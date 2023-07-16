// Day 19 coding Statement : Write a program to identify if the number is Armstrong number or not

#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int temp = n;
int check = n;
int digits = 0;
int ans = 0;
while(n>0){
n = n/10;
digits++;
}

while(temp>0){
    int temp2 = temp%10;
    
   ans += round(pow(temp2,digits));

    temp= temp/10;
}
if(ans==check){
    cout<<"Armstrong number";
}
else 
cout<<"not an Armstrong number";
return 0;
}