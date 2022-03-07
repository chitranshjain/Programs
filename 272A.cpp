#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum = sum + x;
    }

    if (n != 1 && sum % (n + 1) == 0)
        cout << 1;
    else
        cout << sum % (n + 1);
}