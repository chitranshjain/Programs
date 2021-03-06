#include <bits/stdc++.h>
#include <TreeNode.h>
using namespace std;

vector<vector<int> > zigzagLevelOrder(TreeNode<int> *root)
{
    vector<vector<int> > ans;
    queue<pair<TreeNode<int> *, int> > q;
    q.push(make_pair(root, 1));
    int currCount = 1;

    bool rev = false;

    vector<int> v;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> a = q.front();
        q.pop();

        if (a.second == 1)
        {
            if (v.size() > 0)
            {
                if (rev)
                    reverse(v.begin(), v.end());

                if (v.size() > 0)
                {
                    ans.push_back(v);
                    rev = !rev;
                }
            }

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

    if (rev)
        reverse(v.begin(), v.end());

    if (v.size() > 0)
        ans.push_back(v);

    return ans;
}