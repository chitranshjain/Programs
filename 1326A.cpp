#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s = "";

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        bool two = true;
        for (int i = 0; i < n; i++)
        {
            char x;
            if (two)
                x = '2';
            else
                x = '3';

            s = s + x;
            two = !two;
        }
    }
    else
    {
        bool two = true;
        for (int i = 0; i < n - 1; i++)
        {
            char x;
            if (two)
                x = '2';
            else
                x = '3';

            s = s + x;
            two = !two;
        }

        char x = '3';
        s = s + x;
    }

    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}