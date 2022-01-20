#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0, prod = 1;
    while (n > 0)
    {
        int d = n % 10;
        prod = prod * d;
        sum = sum + d;
        n = n / 10;
    }

    return prod - sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<subtractProductAndSum(n);
}