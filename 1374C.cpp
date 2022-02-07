#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int bal = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            bal++;
        else
        {
            if (bal == 0)
                ans++;
            else
                bal--;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}