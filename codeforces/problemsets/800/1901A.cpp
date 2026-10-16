#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int &n, int &x, vector<int> &stations)
{
    // max(gap b/w 0 and a_1, max gap between two gas stations, 2(x-a_n))
    int maxGap = 0;
    if (n != 0)
    {
        for (int k = 0; k < n - 1; ++k)
        {
            if (stations[k + 1] - stations[k] > maxGap)
            {
                maxGap = stations[k + 1] - stations[k];
            }
        }
    }
    cout << max({stations[0], maxGap, 2 * (x - stations[n - 1])}) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, x;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n >> x;
        vector<int> stations(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> stations[j];
        }
        solve(n, x, stations);
    }

    return 0;
}

/*
KEY:
Notice, gas at 0 and x must always be >= 1, as we must move forward from 0 always, and back from x always, and 0 and x are not refill points.
The gas needed at 0 to reach the next fueling station = a_1 - 0 = a1
The gas needed at x to reach the previous fueling station = 2 * (x - a_n)

Besides, we must need enough fuel capacity to hop between the gas stations, so we figure out the maximum gap between two adjacent gas stations and keep track of it.

Hence minimum amount of gas needed to cross from 0 to x and back to 0 is given by:
max(a_1, maxGap, 2*(x - a_n))
*/
