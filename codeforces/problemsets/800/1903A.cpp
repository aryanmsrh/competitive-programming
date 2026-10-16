#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int &k, vector<int> &arr)
{
    if (k == 1)
    {
        if (ranges::is_sorted(arr))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    if (k >= 2)
    {
        // bubble sort can sort ANY error with O(n)
        cout << "YES" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> k;
        vector<int> arr(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }
        solve(k, arr);
    }

    return 0;
}

/*
KEY:
Split the problem into two cases, for k=1 and for k >= 2:
if k = 1, reversing sub-array of length 1 has no effect, hence YES can only be the result if array is already sorted
if k >= 2, reversing a sub-array of length 2 is equivalent to swapping adjacent elements,
and we know that bubbleSort() can sort any array by this same method, hence output is always "YES".
 */