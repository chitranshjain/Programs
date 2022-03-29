#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode<int> *invertTree(TreeNode<int> *root)
    {
        if (root == NULL)
            return NULL;

        TreeNode<int> *left = root->left, *right = root->right;
        root->left = invertTree(right);
        root->right = invertTree(left);

        return root;
    }
};