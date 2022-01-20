#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int sum = 0, last = 9, ans = 0;

    while(sum < n && last > 0)
    {
        ans = ans * 10 + min(n-sum, last);
        sum = sum + last;
        last--;
    }

    int rev = 0;
    sum = 0;

    while(ans > 0)
    {
        int d = ans % 10;
        sum += d;
        rev = rev * 10 + d;
        ans = ans / 10;
    }

    if(sum == n)
    {
        cout<<rev<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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