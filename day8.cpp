// Write a program to find roots of a quadratic equation

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int d = sqrt((b*b)-(4*a*c));
    int ans1 = (-b+d)/(a*2);
    int ans2 = (-b-d)/(a*2);
    cout<<ans1<<" "<<ans2;



    return 0;
}