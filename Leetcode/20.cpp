#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        int bal = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
                bal++;
            }
            else if (!st.empty())
            {
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else if (s[i] == '}' && st.top() == '{')
                    st.pop();
                else if (s[i] == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;

                bal--;
            }
            else
                return false;
        }

        return bal == 0;
    }
};