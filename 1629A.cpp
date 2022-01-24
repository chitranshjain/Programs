#include <bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i].first;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i].second;

    sort(arr.begin(), arr.end(), myComp);

    for (int i = 0; i < n; i++)
    {
        if (arr[i].first <= k)
            k = k + arr[i].second;
        else
            break;
    }

    cout << k << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}