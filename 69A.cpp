#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumX = sumX + x;
        sumY = sumY + y;
        sumZ = sumZ + z;
    }

    if (sumZ == 0 && sumX == 0 && sumY == 0)
        cout << "YES";
    else
        cout << "NO";
}