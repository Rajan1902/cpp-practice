// Day 6 coding Statement:  Write a program to find the Quadrants in which coordinates lie

#include<iostream>
using namespace std;

int quadrant(int a, int b){
    if(a>=0 && b>=0){
        return 1;
    }
    else if(a<0 && b>=0){
        return 2;
    }
    else if(a<0 && b<0){
        return 3;
    }
    else{
        return 4;
    }
}

int main(){
    int a, b;
    cin>>a>>b;
    int ans = quadrant(a, b);
    if(ans == 1){
        cout<<"This point lies in first quadrant";
    }
    else if(ans == 2)
        cout<<"This point lies in second quadrant";
    else if(ans == 3)
        cout<<"This point lies in third quadrant";
    else 
        cout<<"This point lies in fourth quadrant";
    return 0;
}