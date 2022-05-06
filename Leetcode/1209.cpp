#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        int n = s.length();
        if (n < k)
            return s;

        stack<pair<char, int> > st;

        for (int i = 0; i < n; i++)
        {
            if (st.empty() || s[i] != st.top().first)
            {
                st.push({s[i], 1});
            }
            else
            {
                pair<char, int> p = st.top();
                st.pop();
                st.push({s[i], p.second + 1});

                if (st.top().second == k)
                {
                    st.pop();
                }
            }
        }

        string ans = "";
        while (!st.empty())
        {
            pair<char, int> p = st.top();
            st.pop();

            while (p.second--)
            {
                ans += p.first;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};