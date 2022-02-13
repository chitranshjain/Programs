#include <bits/stdc++.h>
#include <unordered_set>
#include <math.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    string smaller, larger;
    if (s.length() < t.length())
    {
        smaller = s;
        larger = t;
    }
    else
    {
        smaller = t;
        larger = s;
    }

    unordered_set<char> s1, s2;
    for (int i = 0; i < smaller.length(); i++)
        s1.insert(smaller[i]);

    for (int i = 0; i < larger.length(); i++)
        s2.insert(larger[i]);

    bool exists = true;
    if (s1.size() == 1 && s2.size() == 1 && smaller[0] == larger[0])
        exists = true;
    else
    {
        for (int i = 0; i < larger.length(); i = i + smaller.length())
        {
            string a = larger.substr(i, smaller.length());
            if (a != smaller)
            {
                exists = false;
                break;
            }
        }
    }

    if (!exists)
        cout << -1 << endl;
    else
    {
        int len1 = smaller.length(), len2 = larger.length();
        int lcmLen = (len1 * len2) / __gcd(len1, len2);

        int mul = lcmLen / len1;
        string res = "";
        for (int i = 0; i < mul; i++)
            res = res + smaller;

        cout << res << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}