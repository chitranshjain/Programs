#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> st;
        int p = 0;
        for (int i = 0; i < pushed.size(); i++)
        {
            st.push(pushed[i]);
            while (!st.empty() && p < popped.size() && st.top() == popped[p])
            {
                st.pop();
                p++;
            }
        }

        while (!st.empty() && p < popped.size() && st.top() == popped[p])
        {
            st.pop();
            p++;
        }

        return p == popped.size();
    }
};