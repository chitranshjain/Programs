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
    unordered_map<int, int> freqs;
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(r[i] - '0'))
        {
            cout << 1 << "\n"
                 << r[i] << endl;
            break;
        }

        freqs[r[i] - '0']++;

        if (freqs[r[i] - '0'] > 1)
        {
            cout << 2 << "\n"
                 << r[i] << "" << r[i] << endl;
            break;
        }

        if (freqs[7] >= 1)
        {
            if (freqs[2] >= 1)
            {
                cout << "2\n27" << endl;
                break;
            }
            else if (freqs[5] >= 1)
            {
                cout << "2\n57" << endl;
                break;
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