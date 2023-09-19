// Day 95 coding Statement :

// Kulyash is given an integer N. His task is to break N into some number of (integer) powers of 2.

// To achieve this, he can perform the following operation several times (possibly, zero):

// Choose an integer X which he already has, and break X into 2 integer parts (Y and Z) such that X=Y+Z.
// Find the minimum number of operations required by Kulyash to accomplish his task.

// Input Format

// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of a single line of input.
// The first and only line of each test case contains an integer N — the original integer with Kulyash.
// Output Format

// For each test case, output on a new line the minimum number of operations required by Kulyash to break N into powers of 2.

// Sample Input

// 2

// 3

// 4

// Sample Output

// 1

// 0

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
int binpow(int a, int b)
{

    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isPowerOfTwo(n))
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            int temp = n;
            while (!isPowerOfTwo(temp))
            {
                count++;
                temp = temp - binpow(2, log2(temp));
            }
            cout << count << endl;
        }
    }

    return 0;
}