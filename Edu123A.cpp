#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<int> keys(3, 0);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'r')
            keys[0]++;

        if (s[i] == 'R')
        {
            if (keys[0] == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
                keys[0]--;
        }

        if (s[i] == 'g')
            keys[1]++;

        if (s[i] == 'G')
        {
            if (keys[1] == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
                keys[1]--;
        }

        if (s[i] == 'b')
            keys[2]++;

        if (s[i] == 'B')
        {
            if (keys[2] == 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
                keys[2]--;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}