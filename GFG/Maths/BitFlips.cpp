#include <bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b)
{
    int count = 0;
    while (a || b)
    {
        if ((a & 1) != (b & 1))
            count++;

        a = a >> 1;
        b = b >> 1;
    }
    return count;
}

int main()
{
    cout << countBitsFlip(10, 20);
}