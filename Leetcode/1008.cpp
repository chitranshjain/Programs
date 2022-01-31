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

    TreeNode(int val, TreeNode *left, TreeNode *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

TreeNode *insert(TreeNode *root, int val)
{
    if (root == NULL)
        return new TreeNode(val);

    if (val > root->val)
        root->right = insert(root->right, val);
    else if (val < root->val)
        root->left = insert(root->left, val);

    return root;
}

TreeNode *bstFromPreorder(vector<int> &preorder)
{
    TreeNode *root = new TreeNode(preorder[0]);
    for (int i = 1; i < preorder.size(); i++)
        root = insert(root, preorder[i]);

    return root;
}