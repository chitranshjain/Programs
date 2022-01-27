#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(3, 0);
    ans[0] = n / 3;
    n = n % 3;

    if (n == 0)
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    else if (n == 1 && ans[0] >= 2)
        cout << ans[0] - 2 << " " << ans[1] << " " << 1 << endl;
    else if (n == 2 && ans[0] >= 1)
        cout << ans[0] - 1 << " " << 1 << " " << ans[2] << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}