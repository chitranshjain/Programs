#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double ans = 0.0;
    for (int i = 1; i <= n; i++)
        ans = ans + (double)1 / (double)i;

    cout << ans;
}