#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, vector<int> > m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]].push_back(i);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int shots = 0;
    vector<int> order;
    for (int i = 0; i < n; i++)
    {
        shots = shots + (arr[i] * i) + 1;
        order.push_back((m[arr[i]].back()) + 1);
        m[arr[i]].pop_back();
    }

    cout << shots << endl;
    for (int i = 0; i < n; i++)
        cout << order[i] << " ";
}