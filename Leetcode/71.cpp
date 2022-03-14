#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string s)
{
    string res = "/", temp = "";
    stack<string> st;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '/')
        {
            if (temp == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else if (temp != "" && temp != ".")
                st.push(temp);

            temp = "";
        }
        else
            temp = temp + s[i];
    }

    if (temp == "..")
    {
        if (!st.empty())
            st.pop();
    }
    else if (temp != "" && temp != "." && temp != "/")
        st.push(temp);

    stack<string> revSt;
    while (!st.empty())
    {
        revSt.push(st.top());
        st.pop();
    }

    while (!revSt.empty())
    {
        res = res + revSt.top() + "/";
        revSt.pop();
    }

    if (res.length() != 1)
        res = res.substr(0, res.length() - 1);

    return res;
}