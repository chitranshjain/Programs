#include <bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes)
{
    vector<int> ans;
    for (int i = 0; i < boxes.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < boxes.length(); j++)
        {
            if (boxes[j] == '1' && i != j)
                count = count + abs(i - j);
        }
        ans.push_back(count);
    }

    return ans;
}