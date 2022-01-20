#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> costs(n);

    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
    }

    sort(costs.begin(), costs.end());

    int maxEarnings = 0, currentEarnings = 0;

    for (int i = 0; i < m; i++)
    {
        currentEarnings = currentEarnings - costs[i];
        maxEarnings = max(maxEarnings, currentEarnings);
    }

    cout << maxEarnings << endl;
}