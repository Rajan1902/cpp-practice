// Day 93 coding Statement :

// After IOI Ilya decided to make a business. He found a social network called "TheScorpyBook.com". It currently has N registered users. As in any social network two users can be friends. Ilya wants the world to be as connected as possible, so he wants to suggest friendship to some pairs of users. He will suggest user u to have a friendship with user v if they are not friends yet and there is a user w who is friends of both of them. Note that u, v and w are different users. Ilya is too busy with IPO these days, so he asks you to count how many friendship suggestions he has to send over his social network.

// Input

// The first line contains an integer number N — the number of users in the network. Next N lines contain N characters each denoting friendship relations. jth character if the ith lines equals one, if users i and j are friends and equals to zero otherwise. This relation is symmetric, i.e. if user a is friend of b then b is also a friend of a.

// Output

// Output a single integer — number of friendship suggestions Ilya has to send.

// Constraints

// 1 ≤ N ≤ 2000

// Sample Input

// 4

// 0111

// 1000

// 1000

// 1000

// Sample Output

// 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    bitset<2000> b, q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < n; j++)
        {
            q[i][j] = a[i][j] - '0';
        }
        q[i][i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            b = q[i] & q[j];
            if (q[i][j] == 0 && b.count() >= 1)
            {

                ans += 2;
            }
        }
    }
    cout << ans << endl;
}