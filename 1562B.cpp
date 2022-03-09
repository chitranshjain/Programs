#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void solve()
{
    int n;
    cin >> n;

    string num;
    cin >> num;

    string r = num;

    for (int i = 0; i < r.length(); i++)
        if (!isPrime(r[i] - '0'))
        {
            cout << 1 << endl;
            cout << r[i] << endl;
            return;
        }

    for (int i = 0; i < r.length() - 1; i++)
    {
        for (int j = i + 1; j < r.length(); j++)
        {
            int num = (r[i] - '0') * 10 + r[j] - '0';

            if (!isPrime(num))
            {
                cout << 2 << endl;
                cout << num << endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}