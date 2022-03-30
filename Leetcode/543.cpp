#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int diameter;

    int findDiameter(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = findDiameter(root->left);
        int rh = findDiameter(root->right);

        diameter = max(lh + rh, diameter);

        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        diameter = 0;
        findDiameter(root);
        return diameter;
    }
};