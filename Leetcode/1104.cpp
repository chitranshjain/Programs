#include <bits/stdc++.h>
using namespace std;

vector<int> pathInZigZagTree(int label)
{
    vector<int> path;

    path.push_back(label);
    while (label > 1)
    {
        int logarithmic = log2(label);
        int numberOfValues = pow(2, logarithmic);
        int complement = 3 * numberOfValues - label - 1;
        path.push_back(complement / 2);
        label = complement / 2;
    }

    reverse(path.begin(), path.end());
    return path;
}