// Day 60 Coding Statement
// Kindly note,

// 1) Coding solution of today's programs will be uploaded the next day at 5 pm.

// 2) New coding statement for Day 61 will be added the next day at 5 pm.

// 3) Once you complete, today's coding statements, submit this study status form : https://forms.gle/4SRVjHyoAKXXZdFaA

 

// Please check the below steps to upload the code text file:

// 1) You need to copy your code in the text file.

// 2) Save that file in PDF format. ( if you don't know how to save in PDF format, you can search it on Google) 

// 3) Name of file should be: yourfullname_Day1 , for eg: RohitSharmaDay5

// 4) Size of the file should not exceed 500 kb.

 

// Day 60 coding Statement : Good Weather

// The weather report of Magicland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.

// Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Magicland is a sunny day, Ai=0 denotes that the ith day in Magicland is a rainy day. Determine if the weather report of Magicland is Good or not.

// Input Format

// First line will contain T, number of testcases. Then the testcases follow.

// Each testcase contains of a single line of input, 7 space separated integers A1,A2,A3,A4,A5,A6,A7.

// Output Format

// For each testcase, print "YES" if the weather report of Magicland is Good, otherwise print "NO". Print the output without quotes.

// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Sample Input 1

// 4

// 1 0 1 0 1 1 1

// 0 1 0 0 0 0 1

// 1 1 1 1 1 1 1

// 0 0 0 1 0 0 0

// Sample Output 1

// YES

// NO

// YES

// NO

#include<iostream>
using namespace std;

bool isGoodWeather(int arr[]){
    int sunny = 0;
    int rainy = 0;
    for(int i = 0; i<7; i++){
        if(arr[i] == 1) sunny++;
        else rainy++;
    }
    if(sunny>rainy){
        return true;
    }
    else return false;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int arr[7];
        for(int i = 0; i<7;i++){
            cin>>arr[i];
        }
       bool ans = isGoodWeather(arr);
       if(ans == true) cout<<"YES";
       else cout<<"NO";
    }
    
    return 0;
}