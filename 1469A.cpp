#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool flag = true;
    int len = s.length();

    if (s[0] == ')' || s[len - 1] == '(' || len % 2 != 0)
        flag = false;

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}