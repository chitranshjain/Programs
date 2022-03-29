#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

bool isIdentical(TreeNode<int> *root, TreeNode<int> *subRoot)
{
    if (!root || !subRoot)
        return root == subRoot;

    return root->val == subRoot->val && isIdentical(root->left, subRoot->left) && isIdentical(root->right, subRoot->right);
}

bool isSubtree(TreeNode<int> *root, TreeNode<int> *subRoot)
{
    if (!root)
        return false;

    if (!subRoot)
        return true;

    if (isIdentical(root, subRoot))
        return true;
    else
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}