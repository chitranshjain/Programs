#include <bits/stdc++.h>
using namespace std;

int minDiff(vector<int> arr, int n)
{
    int res = arr[n - 1] - arr[0];
    for (int i = 0; i < arr.size() - n + 1; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        res = min(res, diff);
    }

    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << minDiff(arr, n);
}