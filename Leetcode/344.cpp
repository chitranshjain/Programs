#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void recursiveReverse(vector<char> &s, int low, int high)
    {
        if (low >= high)
            return;

        swap(s[low], s[high]);
        recursiveReverse(s, low + 1, high - 1);
    }

    void reverseString(vector<char> &s)
    {
        recursiveReverse(s, 0, s.size() - 1);
    }
};