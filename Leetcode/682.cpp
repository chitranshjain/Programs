#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> scores;

        for (auto s : ops)
        {
            if (s == "D")
                scores.push_back(scores[scores.size() - 1] * 2);
            else if (s == "C")
                scores.pop_back();
            else if (s == "+")
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            else
                scores.push_back(stoi(s));
        }

        int sum = 0;
        for (auto n : scores)
            sum += n;

        return sum;
    }
};