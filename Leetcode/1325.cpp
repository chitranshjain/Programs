#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

TreeNode<int> *removeLeafNodes(TreeNode<int> *root, int target)
{
    if (!root)
        return NULL;

    if (root->left)
        root->left = removeLeafNodes(root->left, target);
    if (root->right)
        root->right = removeLeafNodes(root->right, target);

    if (!root->left && !root->right && root->data == target)
        return NULL;
    else
        return root;
}