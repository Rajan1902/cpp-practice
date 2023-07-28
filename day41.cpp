// Day 41 coding Statement : Check if two strings match where one string contains wildcard characters

// Description

// Get two strings as input from the user, first with wildcard characters (* and ?) and second without wildcard characters.

// Then check whether they match or not.

// Input

// Ta**nt

// Talent

// Output

// Yes they match

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s1;
    string s2;

    cin>>s1>>s2;
    bool flag = 1;
    if(s1.length() == s2.length()){
        for(int i = 0; i<s1.length(); i++){
            if(s1[i] != '*' && s1[i] != '?'){
                if(s1[i]!=s2[i]){
                    flag = 0;
                }
            }
        }
    }
    if(flag==1){
        cout<<"Yes they match!";
    }
    else cout<<"No";
    return 0;
}