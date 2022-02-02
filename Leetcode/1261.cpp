#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class FindElements
{
public:
    unordered_set<int> val;

    FindElements(TreeNode *root)
    {
        if (root)
            val.insert(0);

        fixTree(root->left, 0, true);
        fixTree(root->right, 0, false);
    }

    void fixTree(TreeNode *root, int parentVal, bool left)
    {
        if (root == NULL)
            return;

        int newVal;

        if (left)
        {
            newVal = 2 * parentVal + 1;
            val.insert(2 * parentVal + 1);
        }
        else
        {
            newVal = 2 * parentVal + 2;
            val.insert(2 * parentVal + 2);
        }

        fixTree(root->left, newVal, true);
        fixTree(root->right, newVal, false);
    }

    bool find(int target)
    {
        if (val.find(target) == val.end())
            return false;
        else
            return true;
    }
};