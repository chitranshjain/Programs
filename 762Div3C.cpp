#include <bits/stdc++.h>
#include <sstream>
using namespace std;

typedef long long int ll;

void solve()
{
    ll a, s;
    cin >> a >> s;

    ll aOriginal = a, sOriginal = s;

    vector<int> res;

    while (a > 0 || s > 0)
    {
        int x = s % 10;
        s /= 10;

        int y = a % 10;
        a /= 10;

        if (x < y)
        {
            int xx = s % 10;
            s /= 10;
            xx = xx * 10;
            x = x + xx;

            res.push_back(x - y);
        }
        else
        {
            res.push_back(x - y);
        }
    }

    reverse(res.begin(), res.end());
    ll b = 0;

    for (int i = 0; i < res.size(); i++)
    {
        b = b * 10;
        b = b + res[i];
    }

    vector<int> sum;
    a = aOriginal, s = sOriginal;
    ll bOriginal = b;

    while (a > 0 || b > 0)
    {
        int x = a % 10;
        a /= 10;

        int y = b % 10;
        b /= 10;

        sum.push_back(x + y);
    }

    reverse(sum.begin(), sum.end());
    string sumStringGenerated = "";

    for (int i = 0; i < sum.size(); i++)
    {
        stringstream ss;
        ss<<sum[i];
        string x;
        ss>>x;
        sumStringGenerated = sumStringGenerated + x;
    }

    ll sumGenerated;
    stringstream ss;

    ss<<sumStringGenerated;
    ss>>sumGenerated;

    if (sumGenerated == sOriginal)
    {
        cout << bOriginal << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}