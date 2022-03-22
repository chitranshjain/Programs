#include <bits/stdc++.h>
using namespace std;

string getSmallestString(int n, int k)
{
    vector<char> res(n);
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int rem = k - (n - count - 1);
        if (rem > 26)
        {
            res[i] = 'z';
            k = k - 26;
        }
        else
        {
            res[i] = 'a' + rem - 1;
            k = k - rem;
        }
        count++;
    }

    string r = "";
    for (int i = 0; i < n; i++)
        r += res[i];

    return r;
}