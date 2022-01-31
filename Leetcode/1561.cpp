#include <bits/stdc++.h>
using namespace std;

int maxCoins(vector<int> &piles)
{
    sort(piles.begin(), piles.end());
    int ans = 0, n = piles.size() - 2, i = 0;
    while (n > i)
    {
        ans = ans + piles[n];
        n = n - 2;
        i++;
    }

    return ans;
}