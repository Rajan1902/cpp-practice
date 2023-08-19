// Day 64 coding Statement : Amit and Feedback

// Lots of geeky customers visit our Amit's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.

// Now since Amit is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad :

// If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.

// So given some binary strings, you need to output whether according to the Amit, the strings are Good or Bad.

// Input

// The first line contains an integer T denoting the number of feedbacks. Each of the next T lines contains a string composed of only '0' and '1'.

// Output

// For every test case, print in a single line Good or Bad as per the Amit's method of classification.

// Input:

// 2

// 11111110

// 10101010101010

// Output:

// Bad

// Good
#include<iostream>
using namespace std;

bool checkReview(char s[]){
    bool flag = false;
    int i = 0;
    int temp = 0;
    while(s[i+1]!= '\0'){
        if(s[i]!=s[i+1]){
            temp+=1;
            if(temp==2){
                flag = true;
                break;
            }
        }
        else{
            temp = 0;
        }
        i++;
    }
    return flag;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[50];
        cin>>s;
        bool ans = checkReview(s);
        if(ans == true) cout<<"GOOD";
        else cout<<"BAD";
    }
    return 0;
}