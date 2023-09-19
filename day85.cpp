// Day 85 coding Statement :

// You are given an undirected graph with N nodes (numbered 1 through N) and M edges. Each edge connects two distinct nodes. However, there may be multiple edges connecting the same pairs of nodes, and they are considered to be distinct edges. A lowercase English letter is written in each node.

// You are also given a string S with length L. A beautiful path is a sequence of L−1 edges such that there is a sequence of L nodes with the following properties:

// for each valid i, the i-th edge connects the i-th and (i+1)-th of these nodes
// for each valid i, the i-th character of S is written in the i-th of these nodes
// There are no other restrictions — a path may visit nodes or edges any number of times in any order.

// Determine the number of beautiful paths in the graph. Since the answer can be very large, compute it modulo (10^9)+7.

// Input

// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains three space-separated integers N, M and L.
// The second line contains a single string S with length L.
// The third line contains a single string with length N. For each valid i, the i-th character of the string is the letter written in the i-th node.
// Two lines follow. The first line contains M integers u1?,…,um?. The second lines contains M integers, v1?,…,vm?. This denotes that there is an edge connecting nodes ui? and to vi?. These edges are distinct, even though they may connect the same pair of nodes.
// Output

// For each test case, print a single line containing one integer — the number of beautiful paths modulo (10^9)+7.

// Sample Input

// 2

// 4 4 3

// aac

// aaca

// 1 2 2 1

// 2 3 4 2

// 2 1 2

// aa

// aa

// 1

// 2

// Sample Output

// 3

// 1
#include <bits/stdc++.h>
using namespace std;
#define int long long
void read(int &x)
{
    char ch = getchar();
    x = 0;
    while (!isdigit(ch))
        ch = getchar();
    while (isdigit(ch))
        x = x * 10 + ch - 48, ch = getchar();
}
const int N = 1024, mod = 1e9 + 7;
int n, m, l, f[22][N], x[N * 2], y[N * 2];
char a[N], b[N];
int cnt[N][N];
signed main()
{
    int T;
    read(T);
    while (T--)
    {
        memset(f, 0, sizeof(f));
        read(n), read(m), read(l);
        scanf("%s %s", b + 1, a + 1);
        for (int i = 1; i <= m; ++i)
            read(x[i]);
        for (int i = 1; i <= m; ++i)
            read(y[i]);
        for (int i = 1; i <= m; ++i)
            if (x[i] > y[i])
                swap(x[i], y[i]);
        for (int i = 1; i <= m; ++i)
            x[i + m] = y[i], y[i + m] = x[i];

        for (int i = 1; i <= n; ++i)
            if (a[i] == b[1])
                f[1][i] = 1;
        for (int i = 2; i <= l; ++i)
        {
            for (int j = 1; j <= m * 2; ++j)
                if (a[y[j]] == b[i])
                    (f[i][y[j]] += f[i - 1][x[j]]) %= mod;
        }
        int res = 0;
        for (int i = 1; i <= n; ++i)
            (res += f[l][i]) %= mod;
        for (int i = 1; i <= m; ++i)
            ++cnt[x[i]][y[i]];
        int tag = 1;
        for (int i = 2; i <= l; ++i)
            if (b[i] != b[1])
                tag = 0;
        if (tag)
        {
            for (int i = 1; i <= m; ++i)
            {
                if (cnt[x[i]][y[i]] && a[x[i]] == b[1] && a[y[i]] == b[1])
                {
                    int ans = 1;
                    for (int j = 1; j < l; ++j)
                        (ans *= cnt[x[i]][y[i]]) %= mod;
                    (res -= ans) %= mod;
                }
                cnt[x[i]][y[i]] = 0;
            }
        }
        for (inti = 1; i <= m; ++i)
            cnt[x[i]][y[i]] = 0;
        printf("%lld\n", (res + mod) % mod);
    }
    return 0;
}