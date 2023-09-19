// Day 89 coding Statement :

// You are given N integers. In each step you can choose some K of the remaining numbers and delete them, if the following condition holds: Let the K numbers you've chosen be a1, a2, a3, ..., aK in sorted order. Then, for each i ≤ K - 1, ai+1 must be greater than or equal to ai * C.

// You are asked to calculate the maximum number of steps you can possibly make.

// Input

// The first line of the input contains an integer T, denoting the number of test cases. The description of each testcase follows.
// The first line of each testcase contains three integers: N, K, and C
// The second line of each testcase contains the N initial numbers
// Output

// For each test case output the answer in a new line.

// Sample Input

// 2

// 6 3 2

// 4 1 2 2 3 1

// 6 3 2

// 1 2 2 1 4 4

// Sample Output

// 1

// 2

#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

    vector<ll>
        nums;
int T, N, K, C;
int lo, mid, hi, x;
bool check(int L)
{
    vector<ll> v[L];
    int i = 0;
    for (auto num : nums)
    {
        if (v[i].size() == K)
        {
            break;
        }
        if (v[i].size() == 0 || (v[i].back() < INF / C && v[i].back() * C <= num))
        {
            v[i].push_back(num);
            i = (i + 1) % L;
        }
    }
    return v[L - 1].size() == K;
}
int main()
{
    ll num;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> C;
        nums.clear();
        while (N--)
        {
            cin >> num;
         
                nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        x = 0;
        lo = 1;
        hi = nums.size() / K;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (check(mid))
            {
                x = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << x << endl;
    }
    return 0;
}