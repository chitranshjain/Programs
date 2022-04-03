#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    bool hasPathSum(TreeNode<int> *root, int targetSum)
    {
        if (root && !root->left && !root->right)
        {
            return targetSum - root->val == 0;
        }
        else if (!root)
        {
            return false;
        }

        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};