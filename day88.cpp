// Day 88 coding Statement :

// Blobo2 is in his practical exam. The teacher gave him a permutation A of N integers.

// The teacher has allowed Blobo2 to make a certain type of operation on the permutation. In one operation, he can:

// Apply left shift on the permutation. In other words, he can take the first element of the permutation and move it to the back of the permutation.
// The teacher has asked Blobo2 to find the lexicographically smallest permutation possible after applying any (possibly zero) number of given operations.

// Since Blobo2 wants to impress his teacher, he decided to perform at most two swaps in addition to the allowed operation.

// Find the lexicographically smallest possible permutation Blobo2 can generate after applying at most two swaps and any number of given operations.

// Note:

// A permutation of size N consists of all integers from 1 to N exactly once.
// During a swap, Blobo2 can choose any two indices i and j (1≤i,j≤N) and swap Ai? with Aj?.
// A permutation X is said to be lexicographically smaller than a permutation Y if Xi?<Yi?, where i is the first index where both the permutations differ.
// Input Format

// The first line of input will contain a single integer T, denoting the number of test cases.
// The second line will contain the integer N, denoting the size of the permutation.
// The third line contains N distinct integers, the elements of the permutation A.
// Output Format

// Output the lexicographically smallest possible permutation Blobo2 can generate after applying at most two swaps and any number of given operations.

// Sample Input

// 2

// 5

// 5 2 1 4 3

// 5

// 3 5 2 1 4

// Sample Output

// 1 2 3 4 5

// 1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
#define N 100500
struct Data
{
    int n;
    int a[N], p[N];
    Data(int n = 0) : n(n) {}
    void turn(int k)
    {
        k %= n;
        if (k < 0)
            k += n;
        for (int i = k + 1; i <= n; i++)
            p[i - k] = a[i];
        for (int i = 1; i <= k; i++)
            p[n - k + i] = a[i];
        for (int i = 1; i <= n; i++)
            a[i] = p[i];
        for (int i = 1; i <= n; i++)
            p[a[i]] = i;
    }
    void swp(int i, int j)
    {
        swap(a[i], a[j]);
        swap(p[a[i]], p[a[j]]);
    }
    void update(int k)
    {
        for (int i = 1; i <= n && k; i++)
        {
            if (a[i] != i)
            {

                int t = p[i];
                swp(i, t);
                k--;
            }
        }
    }
} ans, tmp, now, prv;
void cpy(Data &A, Data &B)
{
    A.n = B.n;
    for (int i = 1; i <= A.n; i++)
        A.a[i] = B.a[i];
    for (int i = 1; i <= A.n; i++)
        A.p[i] = B.p[i];
}
bool chkmin()
{
    int f = 0;
    for (int i = 1; i <= ans.n; i++)
        if (ans.a[i] > tmp.a[i])
        {
            f = 1;
            break;
        }
        else if (ans.a[i] < tmp.a[i])
            return 0;
    if (f)
        cpy(ans, tmp);
    return f;
}
void solve()
{
    int n;
    scanf("%d", &n);
    now.n = n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &now.a[i]);
    }
    now.turn(0);

    cpy(ans, now);
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
        {
            cpy(tmp, now);
            tmp.turn(tmp.p[i] - j);
            tmp.update(2);
            chkmin();
        }
    for (int i = 1; i <= n; i++)
        printf("%d%c", ans.a[i], " \n"[i == n]);
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
        solve();
    return 0;
}
