#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    vector<int> keys;

    void getKeys(TreeNode *root)
    {
        if (root == NULL)
            return;

        keys.push_back(root->val);
        getKeys(root->left);
        getKeys(root->right);
    }

    void convertToGst(TreeNode *root, unordered_map<int, int> m, int arr[])
    {
        if (root == NULL)
            return;

        int index = m[root->val];
        root->val = root->val + arr[index];

        convertToGst(root->left, m, arr);
        convertToGst(root->right, m, arr);
    }

    TreeNode *bstToGst(TreeNode *root)
    {
        getKeys(root);
        sort(keys.begin(), keys.end());

        int n = keys.size();
        int suffixSum[n];
        suffixSum[n - 1] = 0;

        for (int i = n - 2; i >= 0; i--)
            suffixSum[i] = suffixSum[i + 1] + keys[i + 1];

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[keys[i]] = i;

        convertToGst(root, m, suffixSum);
        return root;
    }
};