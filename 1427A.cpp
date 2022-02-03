#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    bool flag = sum != 0 ? true : false;

    if (flag)
    {
        cout << "YES" << endl;
        if (sum < 0)
            sort(arr.begin(), arr.end());
        else
            sort(arr.begin(), arr.end(), greater<int>());
            
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}