#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    bool hasOne(TreeNode<int> *root)
    {
        if (!root)
            return false;

        bool left = hasOne(root->left);
        if (!left)
            root->left = NULL;

        bool right = hasOne(root->right);
        if (!right)
            root->right = NULL;

        if (left || right || root->val == 1)
            return true;
        else
            return false;
    }

    TreeNode<int> *pruneTree(TreeNode<int> *root)
    {
        bool left = hasOne(root->left);
        if (!left)
            root->left = NULL;

        bool right = hasOne(root->right);
        if (!right)
            root->right = NULL;

        if (!left && !right && root->val != 1)
            return NULL;
        else
            return root;
    }
};