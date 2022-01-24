#include <bits/stdc++.h>
using namespace std;

int minPartitions(string n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n.length(); i++)
    {
        int x = n[i] - '0';
        ans = max(ans, x);
    }

    return ans;
}