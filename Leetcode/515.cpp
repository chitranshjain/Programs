#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    vector<int> largestValues(TreeNode<int> *root)
    {
        vector<int> ans;

        queue<TreeNode<int> *> q;
        if (root)
        {
            q.push(root);
        }

        while (!q.empty())
        {
            int n = q.size();
            int maxElement = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                TreeNode<int> *curr = q.front();
                q.pop();

                maxElement = max(maxElement, curr->val);

                if (curr->left)
                {
                    q.push(curr->left);
                }

                if (curr->right)
                {
                    q.push(curr->right);
                }
            }

            ans.push_back(maxElement);
        }

        return ans;
    }
};