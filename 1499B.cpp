#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool consecOnes = false, possible = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length() && s[i] == s[i + 1])
        {
            if (s[i] == '1' && consecOnes == false)
                consecOnes = true;
            else if (s[i] == '0')
            {
                if (consecOnes == true)
                {
                    possible = false;
                    break;
                }
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