// Day 86 coding Statement :

// Mahesh got a beautiful array named A as a birthday gift from his beautiful girlfriend Namratha. There are N positive integers in that array. Mahesh loved the array so much that he started to spend a lot of time on it everyday. One day, he wrote down all possible subsets of the array. Then for each subset, he calculated the sum of elements in that subset and wrote it down on a paper. Unfortunately, Mahesh lost the beautiful array :(. He still has the paper on which he wrote all subset sums. Your task is to rebuild beautiful array A and help the couple stay happy :)

// Input

// The first line of the input contains an integer T denoting the number of test cases. First line of each test case contains one integer N, the number of elements in A. Second line of each test case contains 2^N integers, the values written on paper

// Output

// For each test case, output one line with N space separated integers in non-decreasing order.

// Sample Input

// 2

// 1

// 0 10

// 2

// 0 1 1 2

// Sample Output

// 10

// 1 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int end = pow(2, n);
        multiset<int> st;
        for (int i = 0; i < end; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                st.insert(x);
            }
        }
        if (n == 1)
        {
            auto it = st.begin();
            int num = *it;
            cout << num << "\n";
            continue;
        }
        vector<int> org;
        vector<int> sub_sums;
        for (int i = 0; i < 2; i++)
        {
            auto it = st.begin();
            int x = *it;
            org.push_back(x);
            sub_sums.push_back(x);
            st.erase(it);
        }
        sub_sums.push_back(org[0] + org[1]);
        st.erase(org[0] + org[1]);

        for (int i = 2; i < n; i++)
        {
            auto it = st.begin();
            int number = *it;
            st.erase(it);
            org.push_back(number);
            vector<int> newsums;
            for (int sum : sub_sums)
            {
                st.erase(number + sum);
                newsums.push_back(number + sum);
            }
            for (int x : newsums)
            {
                sub_sums.push_back(x);
            }
            sub_sums.push_back(number);
        }
        for (int x : org)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}