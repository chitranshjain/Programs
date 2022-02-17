#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int> > arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i].first = i+1;
        cin >> arr[i].second;
    }

    int index = 0;
    while (index < arr.size() - 1)
    {
        arr[index].second = arr[index].second - m;
        if (arr[index].second > 0)
            arr.push_back(arr[index]);

        index++;
    }

    cout << arr[index].first;
}