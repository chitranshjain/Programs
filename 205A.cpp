#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int minimumDist = INT_MAX, minimumDistCity = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < minimumDist)
        {
            minimumDist = arr[i];
            minimumDistCity = i;
        }
    }

    for (int i = 0; i < n; i++)
        if (arr[i] == minimumDist && i != minimumDistCity)
        {
            cout << "Still Rozdil";
            return 0;
        }

    cout << minimumDistCity + 1;
}