
// Day 22 coding Statement : Write a program to express a number as a sum of two prime numbers
#include<iostream>
using namespace std;
bool isPrime(int n)
{
    bool flag = true;
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
            }
        }
    }
    else
    {
        flag = false;
    }
    return flag;
}
int main(){
    int n; 
    cin>>n;
    bool flag = false;
    for(int i = 2; i<n-1; i++){
        if(flag == true){
            
        }
        for(int j = 2; j<n-1; j++){
            if(flag == true){
                break;
            }
            if(isPrime(i) == true && isPrime(j)==true){
                if(i+j == n){
                    cout<<i<<" "<<j;
                    flag = true;
                }
            }
        }
    }
}