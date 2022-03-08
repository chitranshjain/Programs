#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.length();

    char x;
    cin >> x;

    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            int left = i;
            int right = n - i - 1;

            if (left % 2 == 0 && right % 2 == 0)
            {
                possible = true;
                break;
            }
        }
    }

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}