#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int curr = arr[0], extra = 0;
    vector<int> ans;
    ans.push_back(curr);

    for (int i = 1; i < n; i++)
    {
        if (curr + arr[i] >= k)
        {
            curr = arr[i];
            ans.push_back(arr[i]);
            continue;
        }
        else
        {
            int newExtra = k - curr - arr[i];
            arr[i] = arr[i] + newExtra;
            ans.push_back(arr[i]);
            extra = extra + newExtra;
            curr = arr[i];
        }
    }

    cout << extra << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}