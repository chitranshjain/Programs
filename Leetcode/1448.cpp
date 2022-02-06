#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int count;

    void countGoodNodes(TreeNode<int> *root, int greatest)
    {
        if (!root)
            return;

        if (root->data >= greatest)
            count++;

        countGoodNodes(root->left, max(greatest, root->data));
        countGoodNodes(root->right, max(greatest, root->data));
    }

    int goodNodes(TreeNode<int> *root)
    {
        count = 0;
        countGoodNodes(root, INT_MIN);
        return count;
    }
};