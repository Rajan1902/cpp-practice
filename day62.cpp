// Day 62 Coding Statement
// Kindly note,

// 1) Coding solution of today's programs will be uploaded the next day at 5 pm.

// 2) New coding statement for Day 63 will be added the next day at 5 pm.

// 3) Once you complete, today's coding statements, submit this study status form : https://forms.gle/2M5CdJm78t3yhttT9

 

// Please check the below steps to upload the code text file:

// 1) You need to copy your code in the text file.

// 2) Save that file in PDF format. ( if you don't know how to save in PDF format, you can search it on Google) 

// 3) Name of file should be: yourfullname_Day1 , for eg: RohitSharmaDay5

// 4) Size of the file should not exceed 500 kb.

 

// Day 62 coding Statement : Gold Mining

// Anusree has decided to go to a gold mine along with N of his friends (thus, total N+1 people including Anusree go to the gold mine).

// The gold mine contains a total of X kg of gold. Every person has the capacity of carrying up atmost Y kg of gold.

// Will Anusree and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.

// Input Format

// First line will contain T, number of testcases. Then the testcases follow. Each testcase contains of a single line of input, three integers N, X, Y.

// Output Format

// For each testcase, output "YES" if you and your friends can carry all the gold, otherwise output "NO".

// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Sample Input 1

// 3

// 2 10 3

// 2 10 4

// 1 5 10

// Sample Output 1

// NO

// YES

// YES

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        if((n+1)*y>=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}