#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

class Solution
{
public:
    vector<int> rightSideView(TreeNode<int> *root)
    {
        vector<int> ans;
        queue<TreeNode<int> *> q;
        q.push(root);

        while (!q.empty())
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                TreeNode<int> *curr = q.front();
                q.pop();

                if (curr)
                {
                    if (i == count - 1)
                        ans.push_back(curr->val);

                    if (curr->left)
                        q.push(curr->left);

                    if (curr->right)
                        q.push(curr->right);
                }
            }
        }

        return ans;
    }
};