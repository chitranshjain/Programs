#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int checkBalanced(TreeNode<int> *root)
    {
        if (!root)
            return 0;

        int lh = checkBalanced(root->left);
        int rh = checkBalanced(root->right);

        if (lh == -1 || rh == -1 || abs(lh - rh) > 1)
            return -1;

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode<int> *root)
    {
        return checkBalanced(root) != -1;
    }
};