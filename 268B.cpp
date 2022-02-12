#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int ans = 0;
    for (int i = 1; i < n; i++)
        ans = ans + ((n - i) * i);

    cout << ans + n << endl;
}