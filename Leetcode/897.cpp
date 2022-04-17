#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

// Inorder Traversal O(2n) => O(n) Solution
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

    TreeNode<int> *constructTree(int &inorderIndex)
    {
        if (inorderIndex >= inorder.size())
            return NULL;

        TreeNode<int> *root = new TreeNode<int>(inorder[inorderIndex++]);
        root->right = constructTree(inorderIndex);
        return root;
    }

    TreeNode<int> *increasingBST(TreeNode<int> *root)
    {
        inorderTraversal(root);
        int inorderIndex = 0;
        return constructTree(inorderIndex);
    }
};

// Single traversal => O(n) Solution

class Solution
{
public:
    TreeNode<int> *curr;

    void inorder(TreeNode<int> *root)
    {
        if (!root)
            return;

        inorder(root->left);
        root->left = NULL;
        curr->right = root;
        curr = root;
        inorder(root->right);
    }

    TreeNode<int> *increasingBST(TreeNode<int> *root)
    {
        TreeNode<int> *ans = new TreeNode<int>(-1);
        curr = ans;
        inorder(root);
        return ans->right;
    }
};