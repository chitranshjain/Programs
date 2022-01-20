#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, m, r, c, countBlack = 0;
    cin >> n >> m >> r >> c;

    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'B')
            {
                countBlack++;
            }
        }
    }

    if (countBlack == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if(grid[r-1][c-1] == 'B')
        {
            cout<<0<<endl;
            return;
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][c-1] == 'B')
            {
                cout<<1<<endl;
                return;
            }
        }

        for(int i=0;i<m;i++)
        {
            if(grid[r-1][i] == 'B')
            {
                cout<<1<<endl;
                return;
            }
        }

        cout<<2<<endl;
        return;
    }
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