#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int curr = 1;
    for (int i = 0; i < n; i++)
        if (v[i] >= curr)
            curr++;

    cout << curr - 1;
}