#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxPiranha = *max_element(arr.begin(), arr.end());
    int dominantPiranha = -1;

    for (int i = 0; i < n; i++)
    {
        int l = i - 1, r = i + 1;
        // cout << "l = " << l << " r = " << r << " piranha[i] = " << arr[i] << " piranha[l] = " << arr[l] << " piranha[r] = " << arr[r] << endl;
        if (arr[i] == maxPiranha)
        {
            if (l >= 0 && arr[l] < arr[i])
            {
                dominantPiranha = i + 1;
                break;
            }
            else if (r < n && arr[i] > arr[r])
            {
                dominantPiranha = i + 1;
                break;
            }
        }
    }

    cout << dominantPiranha << endl;
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