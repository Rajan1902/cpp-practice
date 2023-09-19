// Day 94 coding Statement :

// Kekocity's population consist of N gnomes numbered with unique ids from 1 to N. As they are very joyful gnomes, they usually send jokes to their friends right after they get any (even if they knew it before) via their social network named as Mybeard. Mybeard became popular in the city because of message auto-deletion. It takes exactly one minute to read and resend joke to mates.

// Mayor of Kekocity, Mr. Shaikhinidin, is interested in understanding how the jokes are spread. He gives you database of Mybeard social network, and wants you to answer some queries on it.

// You will be given a list of friends for every gnome and M queries of the following type: Who will receive a message with joke after exactly K minutes, if the creator of joke was gnome with id x?

// Input

// The first line contains a single integer N denoting the number of gnomes.

// The next N lines contain the the matrix g[N][N]. Each of the i-th line, will contain N space separated integers - j-th of those will denote g[i][j]. If gnome j is friend of gnome i, then g[i][j] is 1. Otherwise it will be zero. Plese note that the friendship relationship is not bidirectional, i.e. it might happen that g[i][j] may not be equal to g[j][i]. Also one can be friend of itself also, i.e. g[i][i] may be equal to 1.

// The next line contains a single integer M denoting the number of queries. The next M lines contain two integers k and x described above.

// Output

// For each query, output two lines.

// In the first line, output how many gnomes will know the joke after k minutes.

// In the second line, print these ids (numbering) of these gnomes in increasing order. If no one will know the joke after K minutes, then print -1 in this line.

// Constraints

// 1 ≤ N ≤ 500
// 1 ≤ M ≤ 500
// 0 ≤ k ≤ 109
// 1 ≤ x ≤ N
// 0 ≤ g[i][j] ≤ 1

// Sample Input

// 5

// 0 1 0 0 0

// 0 0 1 1 0

// 1 0 0 0 0

// 0 0 0 1 0

// 0 0 0 0 0

// 4

// 3 1

// 10000 1

// 0 5

// 1 5

// Sample Output

// 2

// 1 4

// 2

// 2 4

// 1

// 5

// 0

// -1

#include <cstdio>
#include <bitset>
#include <vector>
using namespace std;
int n, m, k;
bitset<500> f[30][500];
void Prep()
{

    for (int j = 1; j <= 29; ++j)
        for (int i = 0; i < n; ++i)
            for (int k = 0; k < n; ++k)
                if (f[j - 1][i][k])
                    f[j][i] |= f[j - 1][k];
}
bitset<500> Query(int st, int t)
{
    bitset<500> s, v;
    s[st] = true;
    for (int j = 29; j >= 0; --j)
        if (t - (1 << j) >= 0)
        {
            t -= 1 << j;
            v.reset();
            for (int i = 0; i < n; ++i)
                if (s[i])
                    v |= f[j][i];
            s = v;
        }
    return s;
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        for (int j = 0, tmp; j < n; ++j)
        {

            scanf("%d", &tmp);
            if (tmp)
                f[0][i][j] = true;
        }
    Prep();
    scanf("%d", &m);
    for (int i = 0, x; i < m; ++i)
    {
        scanf("%d%d", &k, &x);
        bitset<500> r = Query(x - 1, k);
        vector<int> res;
        for (int j = 0; j < n; ++j)
            if (r[j])
                res.push_back(j);
        printf("%d\n", (int)res.size());
        if (res.empty())
            printf("-1");
        else
            for (int j = 0; j < (int)res.size(); ++j)
                printf("%d ", res[j] + 1);
        printf("\n");
    }
    return 0;
}