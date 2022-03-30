#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

vector<vector<int> > levelOrder(TreeNode<int> *root)
{
    vector<vector<int> > ans;
    queue<pair<TreeNode<int> *, int> > q;
    q.push(make_pair(root, 1));
    int currCount = 1;

    vector<int> v;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> a = q.front();
        q.pop();

        if (a.second == 1)
        {
            if (v.size() > 0)
                ans.push_back(v);

            v.clear();
            currCount = 1;
        }

        if (a.first != NULL)
            v.push_back(a.first->val);

        if (a.first != NULL && a.first->left != NULL)
        {
            q.push(make_pair(a.first->left, currCount));
            currCount++;
        }

        if (a.first != NULL && a.first->right != NULL)
        {
            q.push(make_pair(a.first->right, currCount));
            currCount++;
        }
    }

    if (v.size() > 0)
        ans.push_back(v);

    return ans;
}

class Solution
{
public:
    vector<vector<int> > levelOrder(TreeNode<int> *root)
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

        return ans;
    }
};