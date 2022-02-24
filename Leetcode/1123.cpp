#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int depth;

    void findDepth(TreeNode<int> *root, int currDepth)
    {
        if (root == NULL)
            return;

        depth = max(depth, currDepth);

        findDepth(root->left, currDepth + 1);
        findDepth(root->right, currDepth + 1);
    }

    TreeNode<int> *findLca(TreeNode<int> *root, int currDepth)
    {
        if (root == NULL)
            return NULL;

        if (currDepth == depth)
            return root;

        TreeNode<int> *left = findLca(root->left, currDepth + 1);
        TreeNode<int> *right = findLca(root->right, currDepth + 1);

        if (left != NULL && right != NULL)
        {
            if (currDepth = depth - 1)
                return root;
            else
                return NULL;
        }
        else if (left != NULL)
            return left;
        else if (right != NULL)
            return right;
        else
            return NULL;
    }

    TreeNode<int> *lcaDeepestLeaves(TreeNode<int> *root)
    {
        depth = 0;
        findDepth(root, 1);
        return findLca(root, 1);
    }
};