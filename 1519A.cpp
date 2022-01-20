#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPossible(ll r, ll b, ll d)
{
    ll greater = max(r,b), smaller = min(r,b);
    ll diff = greater - smaller;
    ll remains = diff % smaller;
    if(smaller != 1)
    {
        return remains <= d;
    }
    else
    {
        return diff <= d;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,d;
        cin>>r>>b>>d;
        if(isPossible(r,b,d))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}