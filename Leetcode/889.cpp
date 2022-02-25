#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    TreeNode<int> *constructTree(vector<int> preorder, vector<int> postorder, int preBeg, int preEnd, int postBeg, int postEnd)
    {
        if (preBeg > preEnd || postBeg > postEnd || preEnd > preorder.size())
            return NULL;

        TreeNode<int> *root = new TreeNode<int>(preorder[preBeg]);

        if (preBeg == preEnd)
            return root;

        int newPreBeg = preBeg + 1, newPreEnd;
        int newPostBeg = postBeg, newPostEnd;

        for (int i = newPostBeg; i < postEnd; i++)
            if (postorder[i] == preorder[newPreBeg])
            {
                newPostEnd = i;
                break;
            }

        newPreEnd = newPreBeg + newPostEnd - newPostBeg;

        root->left = constructTree(preorder, postorder, newPreBeg, newPreEnd, newPostBeg, newPostEnd);
        root->right = constructTree(preorder, postorder, newPreEnd + 1, preEnd, newPostEnd + 1, postEnd - 1);

        return root;
    }

    TreeNode<int> *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        return constructTree(preorder, postorder, 0, preorder.size() - 1, 0, postorder.size() - 1);
    }
};