#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        if (n & 1)
            count++;

        n = n >> 1;
    }

    cout << count;
}