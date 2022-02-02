#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;

    int needed = n - 1, tank = 0, money = 0;
    for (int i = 1; i < n; i++, tank--)
    {
        int litres = min(v - tank, needed);
        money = money + (litres * i);
        tank = v;
        needed = needed - litres;
        if (needed == 0)
            break;
    }

    cout << money;
}