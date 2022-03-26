#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;

    void helper(string digits, string curr, int index, vector<string> &mapping)
    {
        if (index == digits.length())
        {
            ans.push_back(curr);
            return;
        }

        for (char c : mapping[digits[index] - '2'])
            helper(digits, curr + c, index + 1, mapping);
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if (digits == "")
            return ans;
        else
            helper(digits, "", 0, mapping);

        return ans;
    }
};