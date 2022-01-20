#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    int len = s.length();

    if (len % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int first = 0, second = len / 2;
        bool square = true;
        for (int i = 0; i < len/2; i++)
        {
            if(s[first] != s[second])
            {
                square = false;
                break;
            }

            first++;
            second++;
        }

        if(square)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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