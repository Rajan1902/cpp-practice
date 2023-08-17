// Day 61 coding Statement : Chess Format 

// Given the time control of a chess match as a+b, determine which format of chess out of the given 4 it belongs to.

// 1) Bullet if a+b<3

// 2) Blitz if 3≤a+b≤10

// 3) Rapid if 11≤a+b≤60

// 4) Classical if 60<a+b

// Input Format

// First line will contain T, number of testcases. Then the testcases follow.

// Each testcase contains a single line of input, two integers a,b

// Output Format

// For each testcase, output in a single line, answer 1 for bullet, 2 for blitz, 3 for rapid, and 4 for classical format.

// Sample Input 1

// 4

// 1 0

// 4 1

// 100 0

// 20 5

// Sample Output 1

// 1

// 2

// 4

// 3

#include<iostream>
using namespace std;
int gameMode(int a, int b){
    int total = a+b;
    if(total<3) return 1;
    else if(total >= 3 && total<=10){
        return 2;
    }
    else if(total >= 11 && total<=60){
        return 3;
    }
    else return 4;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<gameMode(a, b);
    }
    return 0;
}