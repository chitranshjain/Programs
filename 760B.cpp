#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    int n;
    cin >> n;

    vector<string> arr;

    for (int i = 0; i < n - 2; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }

    string ans = "";
    for (int i = 0; i < arr.size(); i++)
    {
        string x = arr[i];
        if (i != 0)
        {
            string y = arr[i - 1];

            if (x[0] == y[1])
            {
                ans = ans + x[0];

                if (i == arr.size() - 1 && ans.length() < n)
                {
                    ans = ans + x[1];
                }
            }
            else
            {
                ans = ans + y[1];

                if (i == arr.size() - 1)
                {
                    ans = ans + x[0] + x[1];
                }
                else
                {
                    ans = ans + x[0];
                }
            }
        }
        else
        {
            ans = ans + x[0];

            if (i == arr.size() - 1)
            {
                ans = ans + x[1];
            }
        }
    }

    if (ans.length() < n)
    {
        ans = ans + 'a';
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}