#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    TreeNode()
    {
        val = 0;
        left = right = NULL;
    }

    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }

    TreeNode(int val, TreeNode *left, TreeNode *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

class Solution
{
public:
    vector<int> res;

    void getElement(TreeNode *root)
    {
        if (root == NULL)
            return;

        res.push_back(root->val);
        getElement(root->left);
        getElement(root->right);
    }

    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        getElement(root1);
        getElement(root2);
        sort(res.begin(), res.end());
        return res;
    }
};