#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> positions(n);

    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }

    for (int i = 0; i < n; i++)
    {
        vector<int> comparisons;
        comparisons.push_back(i - 1);
        comparisons.push_back(i + 1);
        comparisons.push_back(0);
        comparisons.push_back(n - 1);

        vector<int> distances;

        for (int j = 0; j < comparisons.size(); j++)
        {
            int c = comparisons[j];
            // cout<<"c = "<<c<<" i = "<<i<<" positions[c] = "<<positions[c]<<" positions[i] = "<<positions[i]<<endl;

            if (c >= 0 && c < n && c != i)
            {
                if ((positions[c] < 0 && positions[i] >= 0) || (positions[c] >= 0 && positions[i] < 0))
                {
                    distances.push_back(abs(positions[c]) + abs(positions[i]));
                }
                else
                {
                    distances.push_back(abs(abs(positions[c]) - abs(positions[i])));
                }
            }
        }

        sort(distances.begin(), distances.end());

        cout << distances[0] << " " << distances[distances.size() - 1] << endl;
    }
}

int main()
{
    solve();

    return 0;
}