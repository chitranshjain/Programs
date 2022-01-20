#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> distances;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vector<int> dist;
            dist.push_back(abs(0 - i) + abs(0 - j));
            dist.push_back(abs(0 - i) + abs(m - 1 - j));
            dist.push_back(abs(n - 1 - i) + abs(0 - j));
            dist.push_back(abs(n - 1 - i) + abs(m - 1 - j));
            distances.push_back(*max_element(dist.begin(), dist.end()));
        }
    }

    sort(distances.begin(), distances.end());
    for (int i = 0; i < distances.size(); i++)
    {
        cout << distances[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}