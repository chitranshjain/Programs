#include <bits/stdc++.h>
using namespace std;

int numberOfSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n & (n - 1);
    }

    return count;
}

int countSetBits(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = res + numberOfSetBits(i);
    }

    return res;
}

int main()
{
    cout << countSetBits(17);
}