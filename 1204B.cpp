#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;

    int lTemp = l - 1, rTemp = 0, minimumSum = 0, maximumSum = 0;
    for (int i = 0; i < n; i++)
    {
        minimumSum = minimumSum + pow(2, lTemp);
        if (lTemp > 0)
            lTemp--;
    }

    for (int i = 0; i < n; i++)
    {
        maximumSum = maximumSum + pow(2, rTemp);
        if (rTemp < r - 1)
            rTemp++;
    }

    cout << minimumSum << " " << maximumSum;
}