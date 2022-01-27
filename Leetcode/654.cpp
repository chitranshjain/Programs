#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    TreeNode()
    {
        val = 0;
        left = right = NULL;
    }

    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }

    TreeNode(int val, TreeNode* left, TreeNode *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

TreeNode *construction(vector<int> n, int beg, int end)
{
    if (beg > end)
        return NULL;

    int maxIdx = beg;
    for (int i = beg + 1; i <= end; i++)
        if (n[i] > n[maxIdx])
            maxIdx = i;

    TreeNode *root = new TreeNode(n[maxIdx]);
    root->left = construction(n, beg, maxIdx - 1);
    root->right = construction(n, maxIdx + 1, end);
    return root;
}

TreeNode *constructMaximumBinaryTree(vector<int> &nums)
{
    return construction(nums, 0, nums.size() - 1);
}