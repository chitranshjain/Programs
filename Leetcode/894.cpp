#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

vector<TreeNode<int> *> allPossibleFBT(int n)
{
    vector<TreeNode<int> *> ans;

    if (n == 1)
    {
        vector<TreeNode<int> *> base;
        base.push_back(new TreeNode<int>(0));
        return base;
    }

    for (int i = 1; i < n; i = i + 2)
    {
        vector<TreeNode<int> *> left = allPossibleFBT(i);
        vector<TreeNode<int> *> right = allPossibleFBT(n - i - 1);

        for (int i = 0; i < left.size(); i++)
        {
            for (int j = 0; j < right.size(); j++)
            {
                TreeNode<int> *root = new TreeNode<int>(0);
                root->left = left[i];
                root->right = right[j];
                ans.push_back(root);
            }
        }
    }

    return ans;
}