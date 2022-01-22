#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool isPallindrome(string s)
{
    int low = 0, high = s.length() - 1;
    while (low <= high)
    {
        if (s[low] != s[high])
            return false;

        low++;
        high--;
    }

    return true;
}

bool buddyStrings(string s, string goal)
{
    bool valid = false;
    bool found = false;

    valid = isPallindrome(s);

    if (s == goal)
    {
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++)
        {
            if (freq.find(s[i]) == freq.end())
            {
                freq[s[i]] = 1;
            }
            else
            {
                valid = true;
                break;
            }
        }
    }

    if (s.length() != goal.length() || s.length() == 1)
    {
        valid = false;
    }
    else
    {
        char prevS = '\0', prevG = '\0', currS = '\0', currG = '\0';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[i])
            {
                if (!found)
                {
                    if (prevS == '\0')
                    {
                        prevS = s[i];
                        prevG = goal[i];
                    }
                    else
                    {
                        currS = s[i];
                        currG = goal[i];
                        found = true;
                    }
                }
                else
                {
                    valid = false;
                    break;
                }
            }

            if (found)
            {
                if (prevS == currG && prevG == currS)
                {
                    valid = true;
                }
                else
                {
                    valid = false;
                }
            }
        }
    }

    return valid;
}

int main()
{
    string s, goal;
    cin >> s;
    cin >> goal;

    cout << buddyStrings(s, goal);
}