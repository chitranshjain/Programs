#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    unordered_set<char> correct;

    if (s.length() == 1)
    {
        cout << s << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (i != 0 && i != s.length() - 1)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
                correct.insert(s[i]);
        }
        else
        {
            if (i == 0 && i != s.length() - 1 && s[i] != s[i + 1])
                correct.insert(s[i]);
            else if (i == s.length() - 1 && i != 0 && s[i] != s[i - 1])
                correct.insert(s[i]);
        }
    }

    vector<char> v;
    for (unordered_set<char>::iterator it = correct.begin(); it != correct.end(); it++)
        v.push_back(*it);

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}