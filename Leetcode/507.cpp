#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num)
{
    vector<int> divisors;

    if (num == 1)
        return false;

    divisors.push_back(1);

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisors.push_back(i);
            divisors.push_back(num / i);
        }
    }

    int sum = 0;
    for (int i = 0; i < divisors.size(); i++)
        sum = sum + divisors[i];

    return sum == num;
}