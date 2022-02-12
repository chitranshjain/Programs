#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    TreeNode<int> *prev, *first, *middle, *last;

    void inorder(TreeNode<int> *root)
    {
        if (!root)
            return;

        inorder(root->left);

        if (root->val < prev->val)
        {
            if (!first)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode<int> *root)
    {
        first = middle = last = NULL;
        prev = new TreeNode<int>(INT_MIN);
        inorder(root);
        if (first && last)
            swap(first->val, last->val);
        else
            swap(first->val, middle->val);
    }
};