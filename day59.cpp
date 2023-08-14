// Day 59 coding Statement : Body Mass Index

// You are given the height H (in metres) and mass M (in kilograms) of Anusree. The Body Mass Index (BMI) of a person is computed as M/H^2.

// Report the category into which Anusree falls, based on his BMI:

// Category 1: Underweight if BMI ≤18

// Category 2: Normal weight if BMI ∈{19, 20,…, 24}

// Category 3: Overweight if BMI ∈{25, 26,…, 29}

// Category 4: Obesity if BMI ≥30

// Input:

// The first line of input will contain an integer, T, which denotes the number of testcases. Then the testcases follow.

// Each testcase contains a single line of input, with two space separated integers, M,H, which denote the mass and height of Anusree respectively.

// Output:

// For each testcase, output in a single line, 1,2,3 or 4, based on the category in which Anusree falls.

// Sample Input:

// 3

// 72 2

// 80 2

// 120 2

// Sample Output:

// 1

// 2

// 4

#include<iostream>
using namespace std;

int checkBmi(int m, int h){
    int bmi = m/(h*h);
    if(bmi<=18){
        return 1;
    }
    else if(bmi>18 && bmi<=24){
        return 2;
    }
    else if(bmi>24 && bmi <=29){
        return 3;
    }
    else return 4;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,h;
        cin>>m>>h;
        cout<<checkBmi(m,h);
    }
}