#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    string tree2str(TreeNode<int> *root)
    {
        string str = "";

        if (!root)
            return str;

        str += to_string(root->val);

        if (root->left && root->right)
        {
            str += '(' + tree2str(root->left) + ')';
            str += '(' + tree2str(root->right) + ')';
        }
        else if (!root->left && !root->right)
        {
            return str;
        }
        else if (root->left && !root->right)
        {
            str += '(' + tree2str(root->left) + ')';
        }
        else if (!root->left && root->right)
        {
            str += "()(" + tree2str(root->right) + ')';
        }

        return str;
    }
};