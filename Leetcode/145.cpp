#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    void postorder(TreeNode<int> *root, vector<int> &ans)
    {
        if (!root)
            return;

        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode<int> *root)
    {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
};