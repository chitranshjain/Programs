#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int count2021 = n % 2020;
    int count2020 = ((n-count2021) / 2020) - count2021;

    if(count2020 >= 0 && ((2020 * count2020) + (2021 * count2021)) == n)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}