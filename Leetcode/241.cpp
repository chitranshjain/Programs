#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    unordered_map<string, vector<int> > res;

    vector<int> compute(string input)
    {
        if (res.find(input) != res.end())
            return res[input];

        vector<int> left, right, ans;

        if (input.length() == 0)
            return ans;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '+' || input[i] == '-' || input[i] == '*')
            {
                left = compute(input.substr(0, i));
                right = compute(input.substr(i + 1));

                for (int l : left)
                {
                    for (int r : right)
                    {
                        if (input[i] == '+')
                            ans.push_back(l + r);
                        else if (input[i] == '-')
                            ans.push_back(l - r);
                        else
                            ans.push_back(l * r);
                    }
                }
            }
        }

        if (!ans.size())
            ans.push_back(stoi(input));
        return ans;
    }

    vector<int> diffWaysToCompute(string expression)
    {
        vector<int> answer = compute(expression);
        return answer;
    }
};