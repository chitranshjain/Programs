#include <bits/stdc++.h>
#include <sstream>
using namespace std;

void solve()
{
    string n;
    cin >> n;

    string curr = "";
    string res = "";
    for (int i = 0; i < n.length() - 1; i++)
    {
        curr = "";
        int a = n[i] - '0', b = n[i + 1] - '0';
        int s = a + b;

        string s1, s3;

        if (i - 1 >= 0)
        {
            s1 = n.substr(0, i);
        }
        else
        {
            s1 = "";
        }

        s3 = n.substr(i + 2, n.length() - i - 2);

        ostringstream str1;
        str1 << s;
        string s2 = str1.str();

        curr = s1 + s2 + s3;

        if (curr.length() > res.length())
        {
            res = curr;
        }
        else if (curr.length() == res.length())
        {
            if (curr.compare(res) > 0)
            {
                res = curr;
            }
        }
    }

    cout << res << endl;
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