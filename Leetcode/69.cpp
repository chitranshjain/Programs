#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    long long int i;
    for (i = 1; i * i <= x;)
        i++;

    return i - 1;
}