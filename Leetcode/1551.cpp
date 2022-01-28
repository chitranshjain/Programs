#include <bits/stdc++.h>
using namespace std;

int minOperations(int n)
{
    if (n % 2 == 0)
    {
        int idx1 = n / 2, idx2 = n / 2 - 1;
        int n1 = 2 * idx1 + 1, n2 = 2 * idx2 + 1;
        int mean = (n1 + n2) / 2;
        int ans = 0;
        int num = 1;
        while (num < n1)
        {
            ans = ans + mean - num;
            num = num + 2;
        }
        return ans;
    }
    else
    {
        int ans = 0, num = 1;
        while (num < n)
        {
            ans = ans + n - num;
            num = num + 2;
        }
        return ans;
    }
}