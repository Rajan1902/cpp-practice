// Day 96 coding Statement : 

// Akhil has many balls of white and black colors. One day, he was playing with them. During the play, he arranged the balls into two rows both consisting of N number of balls. These two rows of balls are given to you in the form of strings X, Y. Both these string consist of 'W' and 'B', where 'W' denotes a white colored ball and 'B' a black colored.

// Other than these two rows of balls, Akhil has an infinite supply of extra balls of each color. he wants to create another row of N balls, Z in such a way that the sum of hamming distance between X and Z, and hamming distance between Y and Z is maximized.

// Hamming Distance between two strings X and Y is defined as the number of positions where the color of balls in row X differs from the row Y ball at that position. e.g. hamming distance between "WBB", "BWB" is 2, as at position 1 and 2, corresponding colors in the two strings differ.

// .

// As there can be multiple such arrangements of row Z, Akhil wants you to find the lexicographically smallest arrangement which will maximize the above value.

// Input

// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows:
// First line of each test case will contain a string X denoting the arrangement of balls in first row
// Second line will contain the string Y denoting the arrangement of balls in second row.
// Output

// For each test case, output a single line containing the string of length N denoting the arrangement of colors of the balls belonging to row Z.
// Constraints

// 1 ≤ T ≤ 3
 

// Sample Input

// 1

// WBWB

// WBBB

// Sample Output

// BWBW

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin>>t;
    while(t--){
        char s1[50];
        char s2[50];
        char s3[50];
        cin>>s1>>s2;
        int i = 0;
        while(s1[i] != '\0'){
            if(s1[i] == 'W' && s2[i] == 'W'){
                s3[i] = 'B';
            }
            else if(s1[i] == 'B' && s2[i] == 'B'){
                s3[i] = 'W';
            }
            else{
                s3[i] = 'B';
            }
            i++;
        }
        int j = 0;
        while(s3[j] != '\0'){
            cout<<s3[j];
            j++;
        }
        cout<<endl;
    }

    return 0;
}