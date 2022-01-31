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

class Solution
{
public:
    vector<int> inorder;

    void inorderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return;

        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    TreeNode *construct(TreeNode *root, int beg, int end)
    {
        if (beg > end)
            return NULL;

        int mid = (beg + end) / 2;
        root->val = inorder[mid];

        root->left = new TreeNode();
        root->right = new TreeNode();

        root->left = construct(root->left, beg, mid - 1);
        root->right = construct(root->right, mid + 1, end);

        return root;
    }

    TreeNode *balanceBST(TreeNode *root)
    {
        inorderTraversal(root);
        TreeNode *root2 = new TreeNode();
        root2 = construct(root2, 0, inorder.size() - 1);

        return root2;
    }
};