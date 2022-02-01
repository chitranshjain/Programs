#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int moves = 0;
    int aIdx = a.length() - 1, bIdx = b.length() - 1;
    while (aIdx >= 0 && bIdx >= 0)
    {
        if (a[aIdx] != b[bIdx])
            break;

        aIdx--;
        bIdx--;
    }

    moves = moves + bIdx + aIdx + 2;
    cout << moves;
}