#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int ll;

void solve()
{
    string needed, typed;
    cin >> needed;
    cin >> typed;

    unordered_map<char, int> freq;
    for (ll i = 0; i < needed.length(); i++)
        freq[needed[i]]--;

    for (ll i = 0; i < typed.length(); i++)
        freq[typed[i]]++;

    ll count = 0;
    bool possible = true;

    for (auto x : freq)
    {
        if (x.second > 0)
            count += x.second;
        else if (x.second < 0)
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << count << endl;
    else
        cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}