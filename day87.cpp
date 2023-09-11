// Day 87 coding Statement :

// There are N stones in a pond, each having a value Ai? written on it. A frog is at stone 1 and wants to reach stone N. The frog can jump from a stone i to any stone j(j>i). Let d be the length of subarray (i.e. j−i+1), then the energy required for the jump is (d⋅Ai?)−Aj?. Find the minimum non-negative amount of energy required by the frog to reach the N-th stone.

// Note: It is possible that the total amount of energy required is negative, in that case, you should print the minimum non-negative value (i.e. 0).

// Input Format

// The first line contains an integer T - the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer N - the number of stones.
// The second line contains N integers denoting the numbers written on the stones.
// Output Format

// For each test case output a single integer - the minimum non-negative energy required by the frog.

// Sample Input

// 4

// 3

// 6 1 3

// 4

// 3 1 10 4

// 3

// 7 9 1

// 2

// 1 5

// Sample Output

// 10

// 4

// 20

// 0
#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
            
        int ans = 0;
        int a = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[a])
            {
                ans += (i - a + 1) * arr[a] - arr[i];
                a = i;
            }
        }
        if (a != n - 1)
            ans += (n - 1 - a + 1) * arr[a] - arr[n - 1];
        if (ans > 0)
            cout << ans << endl;
    }
}