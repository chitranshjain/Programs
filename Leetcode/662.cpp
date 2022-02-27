#include <bits/stdc++.h>
#include <unordered_map>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    int maxWidth;
    unordered_map<int, vector<long long int> > levels;

    void calculateWidth(TreeNode<int> *root, long long int currIndex, int level)
    {
        if (root == NULL)
            return;

        levels[level].push_back(currIndex);

        calculateWidth(root->left, (2 * currIndex + 1) - levels[level][0], level + 1);
        calculateWidth(root->right, (2 * currIndex + 2) - levels[level][0], level + 1);
    }

    int widthOfBinaryTree(TreeNode<int> *root)
    {
        maxWidth = 0;
        levels[0].push_back(0);
        calculateWidth(root->left, 1, 1);
        calculateWidth(root->right, 2, 1);

        for (auto x : levels)
        {
            int n = x.second.size();
            long long int greatest = x.second[n - 1];
            long long int smallest = x.second[0];
            maxWidth = max(maxWidth, (int)(greatest - smallest + 1));
        }

        return maxWidth;
    }
};