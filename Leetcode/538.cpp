#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

// Inorder Traversal
class Solution
{
public:
    vector<int> inorder;
    void inorderTraversal(TreeNode<int> *root)
    {
        if (!root)
        {
            return;
        }

        inorderTraversal(root->left);
        inorder.push_back(root->val);
        inorderTraversal(root->right);
    }

    void suffixSum()
    {
        int n = inorder.size();
        for (int i = n - 2; i >= 0; i--)
            inorder[i] += inorder[i + 1];
    }

    void inorderToTree(TreeNode<int> *root, int &inorderIndex)
    {
        if (!root)
            return;

        inorderToTree(root->left, inorderIndex);
        root->val = inorder[inorderIndex++];
        inorderToTree(root->right, inorderIndex);
    }

    TreeNode<int> *convertBST(TreeNode<int> *root)
    {
        inorderTraversal(root);
        suffixSum();
        int inorderIndex = 0;
        inorderToTree(root, inorderIndex);
        return root;
    }
};

// Reverse Inorder Traversal
class Solution
{
public:
    int sum = 0;

    TreeNode<int> *convertBST(TreeNode<int> *root)
    {
        if (root)
        {
            convertBST(root->right);
            sum += root->val;
            root->val = sum;
            convertBST(root->left);
        }

        return root;
    }
};