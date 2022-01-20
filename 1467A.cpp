#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s = "989";

    if (n <= 3)
    {
        cout<<s.substr(0,n)<<endl;
        return;
    }
    else
    {
        cout<<s;
        for(int i=0;i<n-3;i++)
        {
            cout<<i%10;
        }
        cout<<endl;
        return;
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