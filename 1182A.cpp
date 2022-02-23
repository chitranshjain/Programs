#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << (long long int)pow(2, n / 2) << endl;
    else
        cout << 0 << endl;
}

int main()
{
    solve();
}