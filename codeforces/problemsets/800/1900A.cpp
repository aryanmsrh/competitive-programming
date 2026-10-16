#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int &n, string &cells)
{
    bool found = false;

    for (int k = 1; k < n - 1; ++k)
    {
        if ((cells[k] == '.') and (cells[k - 1] == '.') and (cells[k + 1] == '.'))
        {
            cout << 2 << "\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << ranges::count(cells, '.') << "\n";
}

int main()
{
    iostream::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    char cell;

    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        string cells;

        // for (int j = 0; j < n; ++j)
        // {
        //     cin >> cell;
        //     cells += cell;
        // }

        // BETTER WAY:
        cin >> cells;

        solve(n, cells);
    }

    return 0;
}

/*
KEY:
We must minimize action 1, which is PLACING new water, action 2 can be repeated any number of times we like.
Notice constrain that if cell a_i is flanked by water on both sides, we can create an infinite water well, and from this water well we can create new water to be sloshed around!
To create this water well we need a pattern '...' and must place just 2 new waters (action 1)
But what if there exists only a need to place water in only 1 empty cell? Not possible in this case as it is triggered only when '...' which has 3 empty cells.
After creating water well, just keep repeating action 2.

If '...' is not present, creation of water well is not possible and we must manually place water in all the cells one by one.
Hence the number of actions 1s = number of empty cells.
 */
