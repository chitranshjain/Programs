#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        p[i]--;

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int count = 1, currPos = p[i];
        while (currPos != i)
        {
            currPos = p[currPos];
            count++;
        }

        ans[i] = count;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}