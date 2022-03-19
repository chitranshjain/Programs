#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        string res = "";
        unordered_map<char, int> frequencies;
        vector<bool> inc(26, false);

        for (int i = 0; i < s.length(); i++)
            frequencies[s[i]]++;

        stack<char> st;
        for (int i = 0; i < s.length(); frequencies[s[i]]--, i++)
        {
            if (st.empty() || (s[i] > st.top() && inc[s[i] - 'a'] == false))
            {
                st.push(s[i]);
                inc[s[i] - 'a'] = true;
            }
            else
            {
                while (!st.empty() && st.top() >= s[i] && frequencies[st.top()] >= 1 && inc[s[i] - 'a'] == false)
                {
                    inc[st.top() - 'a'] = false;
                    st.pop();
                }

                if (inc[s[i] - 'a'] == false)
                {
                    st.push(s[i]);
                    inc[s[i] - 'a'] = true;
                }
            }
        }

        while (!st.empty())
        {
            res = res + st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};