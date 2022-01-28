#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j || n - 1 - i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    else
    {
        arr[0][n / 2] = 1;
        arr[n / 2][0] = 1;
        arr[n / 2][n - 1] = 1;
        arr[n - 1][n / 2] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}