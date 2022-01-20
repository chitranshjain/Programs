#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;

    int minWeight = n * (a-b);
    int maxWeight = n * (a+b);

    if(minWeight <= c+d && maxWeight >= c-d)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
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