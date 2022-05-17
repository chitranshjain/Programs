#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    TreeNode<int> *treeToLL(TreeNode<int> *root)
    {
        if (!root)
            return NULL;

        TreeNode<int> *temp = root->right;
        root->right = treeToLL(root->left);
        root->left = NULL;

        TreeNode<int> *t = root;
        while (t->right != NULL)
            t = t->right;

        t->right = treeToLL(temp);

        return root;
    }

    void flatten(TreeNode<int> *root)
    {
        root = treeToLL(root);
    }
};