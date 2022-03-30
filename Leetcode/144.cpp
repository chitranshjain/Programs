#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    void preorder(TreeNode<int> *root, vector<int> &ans)
    {
        if (!root)
            return;

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode<int> *root)
    {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};