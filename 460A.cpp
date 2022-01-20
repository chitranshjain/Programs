#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int socks = n;
    int ans = 0, count = 0;

    while(socks > 0)
    {
        ans++;
        count++;
        socks--;

        if(count == m)
        {
            socks++;
            count = 0;
        }
    }

    cout << ans << endl;
}