#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll votesNeeded(ll a, ll b, ll c)
{
    ll highest = max(b,c);
    if(highest > a)
    {
        ll needed = highest - a;
        return needed+1;
    }
    else if(highest == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<votesNeeded(a,b,c)<<" "<<votesNeeded(b,a,c)<<" "<<votesNeeded(c,a,b)<<endl;
    }

    return 0;
}