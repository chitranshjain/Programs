#include <bits/stdc++.h>
using namespace std;

int wonderfulColoring(string s)
{
    map<char, int> m;
    int count = 0;

    for (char x = 'a'; x <= 'z'; x++)
    {
        m[x] = 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    int one = 0, more = 0;

    for (char x = 'a'; x <= 'z'; x++)
    {
        // cout<<x<<" : "<<m[x]<<endl;
        if (m[x] > 0)
        {
            if (m[x] > 1)
            {
                more++;
            }
            else
            {
                one++;
            }
        }
    }

    return more + (one / 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << wonderfulColoring(s) << endl;
    }
}