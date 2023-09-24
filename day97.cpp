// Day 97 coding Statement :

// Arun has a rooted tree of N vertices rooted at vertex 1. Each vertex can either be coloured black or white.

// Initially, the vertices are coloured A1?,A2?,…AN?, where Ai? ∈ {0,1} denotes the colour of the i-th vertex (here 0 represents white and 1 represents black). He wants to perform some operations to change the colouring of the vertices to B1?,B2?,…BN? respectively.

// Arun can perform the following operation any number of times. In one operation, he can choose any subtree and either paint all its vertices white or all its vertices black.

// Help Arun find the minimum number of operations required to change the colouring of the vertices to B1?,B2?,…BN? respectively.

// Input Format

// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer N — the size of the tree.
// The second line of each test case contains N space-separated integers A1?,A2?,…,AN? denoting the initial colouring of the vertices of the tree.
// The third line of each test case contains N space-separated integers B1?,B2?,…,BN? denoting the final desired colouring of the vertices of the tree.
// The next N−1 lines contain two space-separated integers u and v — denoting an undirected edge between nodes u and v.
// It is guaranteed that the edges given in the input form a tree.

// Output Format

// For each testcase, output the minimum number of operations required to obtain the desired colouring.

// Sample Input

// 2

// 4

// 1 1 0 0

// 1 1 1 0

// 1 2

// 1 3

// 1 4

// 5

// 1 1 1 0 0

// 1 0 1 1 1

// 5 3

// 3 1

// 2 1

// 4 3

// Sample Output

// 1

// 2

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> ini(n + 1);
        vector<int> final(n + 1);
        for (int node = 1; node <= n; node++)
        {
            cin >> ini[node];
        }
         for (int node = 1; node <= n; node++)
        {
            cin >> final[node];
        }
        vector<vector<int>> adj(n + 1);
        for (int edge = 0; edge < n - 1; edge++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        const int OFFSET = 1;
        vector<bool> visited(n + 1, false);
        vector<vector<int>> memo(n + 1, vector<int>(3, -1));
        auto compute = [&](auto &self, int node, int prevOperation) -> int
        {
            if (memo[node][prevOperation + OFFSET] != -1)
            {
                return memo[node][prevOperation + OFFSET];
            }
            int ans = INT_MAX;
            visited[node] = true;
            for (int currentOperation : {prevOperation, 0, 1})
            {
                if ((currentOperation == final[node]) || (currentOperation == -1 && final[node] == ini[node]))
                {
                    int curr = (currentOperation == prevOperation ? 0 : 1);
                    for (int nei : adj[node])
                    {
                        if (visited[nei] == false)
                        {
                            curr += self(self, nei, currentOperation);
                        }
                    }
                    ans = min(ans, curr);
                }
               
            }
            memo[node][prevOperation + OFFSET] = ans;
            visited[node] = false;
            return ans;
        };

        const int ROOT = 1;
        cout << compute(compute, ROOT, -1) << "\n";
    }
    return 0;
}
