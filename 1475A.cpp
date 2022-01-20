#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    if(n & (n-1))
    {
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
    return;
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