// Day 100 coding Statement : 

// You have prepared four problems. The difficulty levels of the problems are A1?,A2?,A3?,A4? respectively. A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Find the maximum number of problem sets you can create using the four problems.

// Input Format

// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains four space-separated integers A1?, A2?, A3?, A4?, denoting the difficulty level of four problems.
// Output Format

// For each test case, print a single line containing one integer - the maximum number of problem sets you can create using the four problems.

// Sample Input

// 3

// 1 4 3 2

// 4 5 5 5

// 2 2 2 2

// Sample Output

// 2

// 1

// 0

#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int ans = 2;
        int temp = 0;
        if(a == b || a==c || a==d){
            temp++;
        }
        if(b == c || b == d){
            temp++;
        }
        if(c == d){
            temp++;
        }
        if(temp>2){
            cout<<0<<endl;
        }
        else if(temp == 2){
            if(a == b && a == c || a == c && a == d){
                cout<<1<<endl;
            } 
            else if(b == c && b == d){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else cout<<2<<endl;
    }
    return 0;
}