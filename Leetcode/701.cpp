#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        val = 0;
        left = right = NULL;
    }

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }

    TreeNode(int x, TreeNode *l, TreeNode *r)
    {
        val = 0;
        left = l;
        right = r;
    }
};

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return new TreeNode(val);

        if (val > root->val)
            root->right = insertIntoBST(root->right, val);
        else
            root->left = insertIntoBST(root->left, val);

        return root;
    }
};