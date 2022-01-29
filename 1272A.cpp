#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());

    int first[3] = {a[0] - 1,
                    a[0],
                    a[0] + 1},
        second[3] = {a[1] - 1, a[1], a[1] + 1}, third[3] = {a[2] - 1, a[2], a[2] + 1};

    int res = INT_MAX;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                res = min(res, abs(first[i] - second[j]) + abs(second[j] - third[k]) + abs(third[k] - first[i]));

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}