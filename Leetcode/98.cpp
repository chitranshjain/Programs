#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    vector<int> inorder;

    void inorderTraversal(TreeNode<int> *root)
    {
        if (!root)
            return;

        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    bool isValidBST(TreeNode<int> *root)
    {
        inorderTraversal(root);
        for (int i = 0; i < inorder.size() - 1; i++)
            if (inorder[i] >= inorder[i + 1])
                return false;

        return true;
    }
};