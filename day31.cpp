//day 31: Write a Program to Toggle each character in a string
// Description
// Get an input string from user and then convert the lower case of alphabets to upper case and all uppercase alphabets into lower case.
// Input
// Hello
// Output
// hELLO

#include<iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i = 0 ; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+32;
        }
        else{
            s[i] = s[i] -32;
        }
}
    cout<<s;
    return 0;
}