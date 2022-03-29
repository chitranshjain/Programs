#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

bool check(TreeNode<int> *root1, TreeNode<int> *root2)
{
    if (!root1 || !root2)
        return root1 == root2;

    return root1->val == root2->val && check(root1->left, root2->right) && check(root1->right, root2->left);
}

bool isSymmetric(TreeNode<int> *root)
{
    return check(root->left, root->right);
}