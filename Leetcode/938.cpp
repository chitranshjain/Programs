#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }

    TreeNode(int x, TreeNode *l, TreeNode *r)
    {
        val = x;
        left = l;
        right = r;
    }
};

int getSum(TreeNode *root, int low, int high, int &sum)
{
    if (root == NULL)
        return 0;

    int val = root->val;
    cout << val << endl;
    if (val >= low && val <= high)
    {
        sum = sum + val;
    }

    getSum(root->left, low, high, sum);
    getSum(root->right, low, high, sum);

    return sum;
}

int rangeSumBST(TreeNode *root, int low, int high)
{
    int sum = 0;
    getSum(root, low, high, sum);

    return sum;
}