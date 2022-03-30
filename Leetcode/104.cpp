#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int depth;

    void traverseDepth(TreeNode<int> *root, int currentDepth)
    {
        if (!root)
            return;

        depth = max(depth, currentDepth);

        traverseDepth(root->left, currentDepth + 1);
        traverseDepth(root->right, currentDepth + 1);
    }

    int maxDepth(TreeNode<int> *root)
    {
        depth = 0;
        traverseDepth(root, 1);
        return depth;
    }
};

class Solution
{
public:
    int maxDepth(TreeNode<int> *root)
    {
        if (!root)
            return 0;

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};