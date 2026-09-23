/* Codeforces Round 281 (Div. 2)
Problem: 493A - Vasya and Football
Link: https://codeforces.com/problemset/problem/493/A
Rating: 1300
Tags: implementation
Key Idea: N.A */
// g++ -std=c++20 -O2 -Wall -Wextra 493A.cpp -o 493A && ./493A && rm 493A

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string home_team, away_team;
    cin >> home_team >> away_team;

    int n;
    cin >> n;

    vector<int> home_yellow(100, 0);
    vector<bool> home_ejected(100, false);

    vector<int> away_yellow(100, 0);
    vector<bool> away_ejected(100, false);

    for (int i = 0; i < n; i++)
    {
        int minute, player;
        char team, card;
        cin >> minute >> team >> player >> card;

        if (team == 'h')
        {
            if (home_ejected[player])
                continue;

            if (card == 'r' || home_yellow[player] == 1)
            {
                home_ejected[player] = true;
                cout << home_team << " " << player << " " << minute << "\n";
            }
            else
            {
                home_yellow[player] = 1;
            }
        }
        else
        {
            if (away_ejected[player])
                continue;

            if (card == 'r' || away_yellow[player] == 1)
            {
                away_ejected[player] = true;
                cout << away_team << " " << player << " " << minute << "\n";
            }
            else
            {
                away_yellow[player] = 1;
            }
        }
    }

    return 0;
}