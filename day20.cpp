// Day 20 coding Statement : Write a program to identify if the number is Prime number or not

#include <iostream>
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

int main()
{
    int n;
    cin >> n;
    if (isPrime(n) == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a prime number";
    }

    return 0;
}