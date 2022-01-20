#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    string s, t;
    cin >> s;
    cin >> t;

    vector<int> freq(26, 0);
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        int index = (int)(s[i] - 'a');

        freq[index]++;
    }

    char first = t[0], second = t[1], third = t[2];
    int firstIndex = first - 'a', secondIndex = second - 'a', thirdIndex = third - 'a';

    if (second != 'a' && third != 'a')
    {
        if (freq[firstIndex] != 0 && freq[secondIndex] != 0 && freq[thirdIndex] != 0)
        {
            for (int i = 0; i < freq[firstIndex]; i++)
            {
                ans = ans + first;
            }

            for (int i = 0; i < freq[thirdIndex]; i++)
            {
                ans = ans + third;
            }

            for (int i = 0; i < freq[secondIndex]; i++)
            {
                ans = ans + second;
            }

            for (int i = 3; i < 26; i++)
            {
                char added = i + 'a';
                for (int j = 0; j < freq[i]; j++)
                {
                    ans = ans + added;
                }
            }
        }
        else
        {
            for (int i = 0; i < 26; i++)
            {
                char added = i + 'a';
                for (int j = 0; j < freq[i]; j++)
                {
                    ans = ans + added;
                }
            }
        }
    }
    else
    {
        sort(s.begin(), s.end());
        ans = s;
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
}