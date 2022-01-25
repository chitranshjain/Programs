#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
{
    if (cloned == NULL)
        return NULL;

    if (cloned->val == target->val)
        return cloned;

    TreeNode *l = getTargetCopy(original, cloned->left, target);
    if (l != NULL)
        return l;
    else
        return getTargetCopy(original, cloned->right, target);
}