#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (isPrime(j))
                    count++;

                if (i / j != j && isPrime(i / j))
                    count++;
            }
        }

        if (count == 2)
            ans++;
    }

    cout << ans;
}