#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool initialState(vector<int> perm)
{
    for (int i = 0; i < perm.size(); i++)
        if (perm[i] != i)
            return false;

    return true;
}
int reinitializePermutation(int n)
{
    vector<int> perm(n);
    unordered_map<int, int> keys;
    for (int i = 0; i < n; i++)
    {
        perm[i] = i;
        int key;
        if (i % 2 == 0)
            key = i / 2;
        else
            key = (n / 2) + ((i - 1) / 2);

        keys[i] = key;
    }

    int steps = 0;

    vector<int> arr(n);
    do
    {
        for (int i = 0; i < n; i++)
            arr[i] = perm[keys[i]];

        perm = arr;
        steps++;
    } while (!initialState(perm));

    return steps;
}