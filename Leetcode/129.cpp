#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int sum;

    void getSum(TreeNode<int> *root, string currSum)
    {
        if (!root)
        {
            return;
        }

        currSum += to_string(root->val);

        if (!root->left && !root->right)
        {
            sum += stoi(currSum);
            return;
        }

        getSum(root->left, currSum);
        getSum(root->right, currSum);

        currSum.pop_back();
    }

    int sumNumbers(TreeNode<int> *root)
    {
        if (!root)
        {
            return 0;
        }

        sum = 0;
        string currSum = "";

        getSum(root, currSum);
        return sum;
    }
};