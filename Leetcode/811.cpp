#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<string> subdomainVisits(vector<string> &cpdomains)
{
    unordered_map<string, int> freq;
    for (int i = 0; i < cpdomains.size(); i++)
    {
        string s = cpdomains[i];
        int num = 0, spaceIndex = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                spaceIndex = i;
                break;
            }

            num = num * 10 + s[i] - '0';
        }

        string r = s.substr(spaceIndex + 1, s.length() - spaceIndex - 1);
        freq[r] = freq[r] + num;
        for (int i = spaceIndex + 1; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                string res = s.substr(i + 1, s.length() - i);
                freq[res] = freq[res] + num;
            }
        }
    }

    vector<string> res;
    for (auto x : freq)
    {
        string f;
        f = to_string(x.second);
        f = f + " ";
        f = f + x.first;
        res.push_back(f);
    }

    return res;
}