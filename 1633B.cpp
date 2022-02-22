#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int zeroes = 0, ones = 0, ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            zeroes++;
        else
            ones++;

        if (ones != zeroes)
            ans = min(zeroes, ones);
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}