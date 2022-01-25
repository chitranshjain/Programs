#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    int sum;

    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    void getSum(TreeNode *root, int depth)
    {
        if (depth == 0)
            sum = sum + root->val;
        else
        {
            if (root->left)
                getSum(root->left, depth - 1);

            if (root->right)
                getSum(root->right, depth - 1);
        }
    }

    int deepestLeavesSum(TreeNode *root)
    {
        int depth = maxDepth(root);
        sum = 0;
        getSum(root, depth - 1);
        return sum;
    }
};