#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<char> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int first = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] != '?' && first == -1)
        {
            first = i;
            break;
        }

    bool blue = arr[first] == 'B';
    for (int i = first - 1; i >= 0; i--)
    {
        if (arr[i] == '?')
        {
            arr[i] = blue ? 'R' : 'B';
            blue = !blue;
        }
        else
        {
            blue = arr[i] == 'B';
        }
    }

    blue = arr[first] == 'B';
    for (int i = first + 1; i < n; i++)
    {
        if (arr[i] == '?')
        {
            arr[i] = blue ? 'R' : 'B';
            blue = !blue;
        }
        else
        {
            blue = arr[i] == 'B';
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}