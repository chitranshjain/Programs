#include <bits/stdc++.h>
using namespace std;

int main()
{
    int candles, b;
    cin >> candles >> b;

    int count = 0, ans = 0;
    while (candles > 0)
    {
        candles--;
        count++;
        ans++;

        if (count == b)
        {
            candles++;
            count = 0;
        }
    }

    cout << ans;
}