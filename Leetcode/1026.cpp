#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution {
public:
    int res;
    
    void findMaxDiff(TreeNode<int> *root, int greatest, int smallest)
    {
        if(!root)
            return;
        
        int val = root->data;
        int diff1 = abs(greatest - val);
        int diff2 = abs(smallest - val);
        res = max(res, max(diff1, diff2));
        
        findMaxDiff(root->left, max(greatest, val), min(smallest, val));
        findMaxDiff(root->right, max(greatest, val), min(smallest, val));
    }
    
    int maxAncestorDiff(TreeNode<int>* root) {
        res = INT_MIN;
        findMaxDiff(root, root->data, root->data);
        return res;
    }
};