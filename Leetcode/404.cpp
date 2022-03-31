#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int sum;

    void calculateSum(TreeNode<int> *root, bool left)
    {
        if (!root)
            return;

        if (!root->left && !root->right && left)
            sum += root->val;

        calculateSum(root->left, true);
        calculateSum(root->right, false);
    }

    int sumOfLeftLeaves(TreeNode<int> *root)
    {
        sum = 0;
        calculateSum(root, false);
        return sum;
    }
};