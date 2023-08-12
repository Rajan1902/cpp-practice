// Day 57 coding Statement :

// "Pass or Fail

// Anusree is struggling to pass a certain college course.
// The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. It is known that Anusree got X questions correct and the rest of them incorrect. For Anusree to pass the course he must score at least P marks.
// Will Anusree be able to pass the exam or not?
// Input Format
// First line will contain T, number of testcases. Then the testcases follow.
// Each testcase contains of a single line of input, three integers N, X, P.
// Output Format
// For each test case output ""PASS"" if Chef passes the exam and ""FAIL"" if Chef fails the exam.
// You may print each character of the string in uppercase or lowercase (for example, the strings ""pAas"", ""pass"", ""Pass"" and ""PASS"" will all be treated as identical).

// Sample Input 1
// 3
// 5 2 3
// 5 2 4
// 4 0 0
// Sample Output 1
// PASS
// FAIL
// FAIL

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int questions, correct, passingMarks;
        cin>>questions>>correct>>passingMarks;

        int totalMarks = correct*3-(questions-correct);
        if(totalMarks>=passingMarks){
            cout<<"PASS";
        }
        else cout<<"FAIL";
    }
    return 0;
}