#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    TreeNode<int> *trimBST(TreeNode<int> *root, int low, int high)
    {
        if (!root)
        {
            return NULL;
        }

        if (root->val >= low && root->val <= high)
        {
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
            return root;
        }

        if (root->val < low)
        {
            return trimBST(root->right, low, high);
        }

        if (root->val > high)
        {
            return trimBST(root->left, low, high);
        }

        return NULL;
    }
};