#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
        sum = sum + s[i] - '0';

    int len = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] % 2 != 0)
            break;
        else
        {
            sum = sum - (s[i] - '0');
            len--;
        }
    }

    if (sum % 2 == 0 && len > 0)
        cout << s.substr(0, len) << endl;
    else
    {
        if (len <= 0)
            cout << -1 << endl;
        else
        {
            string s2 = s.substr(0, len);
            bool flag = false;
            int index = -1;
            for (int i = s2.length() - 2; i >= 0; i--)
            {
                int val = s2[i] - '0';
                if (val % 2 != 0)
                {
                    flag = true;
                    index = i;
                    break;
                }
            }

            if (!flag)
                cout << -1 << endl;
            else
                cout << s2.substr(0, index) << s2.substr(index + 1, len - index - 1) << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}