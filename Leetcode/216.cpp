#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > ans;

    void generateCombinations(vector<int> v, int k, int n, int sum, int prev)
    {
        if (v.size() < k)
        {
            for (int i = prev + 1; i <= 9; i++)
            {
                if (sum + i <= n)
                {
                    sum += i;
                    v.push_back(i);
                    generateCombinations(v, k, n, sum, i);
                    v.pop_back();
                    sum -= i;
                }
                else
                {
                    break;
                }
            }
        }
        else if (v.size() == k)
        {
            if (sum == n)
                ans.push_back(v);
        }

        return;
    }

    vector<vector<int> > combinationSum3(int k, int n)
    {
        vector<int> v;
        generateCombinations(v, k, n, 0, 0);
        return ans;
    }
};