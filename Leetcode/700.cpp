#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    TreeNode<int> *searchBST(TreeNode<int> *root, int val)
    {
        if (!root)
        {
            return NULL;
        }

        if (root->val == val)
        {
            return root;
        }

        if (root->val > val)
        {
            return searchBST(root->left, val);
        }
        else
        {
            return searchBST(root->right, val);
        }
    }
};