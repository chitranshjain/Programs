#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > levelOrderBottom(TreeNode<int> *root)
    {
        vector<vector<int> > ans;
        queue<TreeNode<int> *> q;
        q.push(root);

        while (!q.empty())
        {
            int count = q.size();
            vector<int> a;
            for (int i = 0; i < count; i++)
            {
                TreeNode<int> *curr = q.front();
                q.pop();

                if (curr)
                {
                    a.push_back(curr->val);

                    if (curr->left)
                        q.push(curr->left);

                    if (curr->right)
                        q.push(curr->right);
                }
            }

            if (!a.empty())
                ans.push_back(a);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};