#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    unique(arr.begin(), arr.end());

    int v = 0, next = 1;
    for (int i = 0; i < arr.size();)
    {
        if (arr[i] == next)
            i++;
        else if (x > 0)
            x--;
        else
            break;

        v++;
        next++;
    }

    if (x > 0)
        v = v + x;

    cout << v << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}