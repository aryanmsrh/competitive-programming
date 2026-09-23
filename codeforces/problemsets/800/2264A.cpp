/* Codeforces Round 1121 (Div. 2)
Problem: 2264A - Rumb Needs a Hand
Link: https://codeforces.com/problemset/problem/2264/A
Rating: 800
Tags: implementation,sorting,two pointers
Key Idea: N.A */
// g++ -std=c++20 -O2 -Wall -Wextra name.cpp -o name && ./name

#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &p)
{
    vector<int> bad;
    for (int i = 0; i < n; ++i)
    {
        if (p[i] != i + 1)
        {
            bad.push_back(i);
        }
    }

    int l = 0, r = (int)bad.size() - 1;
    while (l < r)
    {
        swap(p[bad[l]], p[bad[r]]);
        l++;
        r--;
    }

    if (is_sorted(p.begin(), p.end()))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }
        solve(n, p);
    }

    return 0;
}