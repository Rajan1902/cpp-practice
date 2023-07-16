// Day 7 coding Statement:  Write a program to find Number of days in a given month of a given year

#include<iostream>
using namespace std;

int main(){
    int month, year;

    cout<<"Enter month";
    cin>>month;
    cout<<"Enter year";
    cin>>year;

    // checking leap year
    if(month == 2 && ((year%400==0) || (year%100!=0 && year%4==0))){
        cout<<29;
    }
    else if(month == 2){
        cout<<28;
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month== 12){
        cout<<31;
    }
    else{
        cout<<30;
    }
    

    return 0;
}