#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int moves = 0, bal = 0, deleted = 0, start = 0;
    for (int i = 0; i < s.length();)
    {
        if (s[i] == '(')
            bal++;
        else
            bal--;

        i++;

        string rev = "";
        rev += s[i - 1];

        if (bal < 0)
        {
            while (i < s.length())
            {
                rev += s[i];
                
                string curr = rev;
                reverse(rev.begin(), rev.end());
                if (rev == curr)
                {
                    moves++;
                    bal = 0;

                    deleted += i - start;
                    start = i;
                }
                i++;
            }
        }
        else if (bal == 0)
        {
            deleted += i - start;
            start = i;
            moves++;
        }
    }

    cout << moves << " " << s.length() - deleted << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}