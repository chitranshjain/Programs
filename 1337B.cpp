#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,n,m;
    cin>>x>>n>>m;

    while(n-- && x/2+10 < x)
    {
        x = x/2;
        x = x+10;
    }

    while(m--)
    {
        x = x-10;
    }

    if(x<=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}