#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s = "";

    int subLength = 0, chr = 0;

    while(s.length() < n)
    {
        s += 'a' + chr;
        chr++;
        subLength++;

        if(subLength == a)
        {
            subLength = 0;
            chr = 0;
        }

        if(chr == b)
        {
            chr = 0;
        }
    }

    cout<<s<<endl;
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