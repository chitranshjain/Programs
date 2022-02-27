#include <bits/stdc++.h>
#include <TreeNode.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<TreeNode<int> *> ans;

    TreeNode<int> *deleteNodes(TreeNode<int> *root, unordered_set<int> &vals)
    {
        if (root == NULL)
            return NULL;

        if (vals.find(root->val) != vals.end())
        {
            if (root->left != NULL)
                ans.push_back(root->left);

            if (root->right != NULL)
                ans.push_back(root->right);

            delete root;
            return NULL;
        }

        if (root->left != NULL)
            root->left = deleteNodes(root->left, vals);

        if (root->right != NULL)
            root->right = deleteNodes(root->right, vals);

        if (root != NULL)
            return root;
        else
            return NULL;
    }

    vector<TreeNode<int> *> delNodes(TreeNode<int> *root, vector<int> &to_delete)
    {
        unordered_set<int> vals;
        for (int i = 0; i < to_delete.size(); i++)
            vals.insert(to_delete[i]);

        ans.push_back(root);
        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = deleteNodes(ans[i], vals);

            if (ans[i] == NULL)
            {
                ans.erase(ans.begin() + i);
                i--;
            }
        }

        return ans;
    }
};