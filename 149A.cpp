#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> growth(12, 0);

    for (int i = 0; i < 12; i++)
    {
        cin >> growth[i];
    }

    sort(growth.begin(), growth.end());

    int month = 11;

    while (k > 0 && month >= 0)
    {
        k = k - growth[month];
        month--;
    }

    if (k > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 11 - month << endl;
    }
}