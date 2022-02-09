#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int res = n - max(a + 1, n - b) + 1;
    cout << res;
}