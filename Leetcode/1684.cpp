#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    unordered_set<char> chars;
    for (int i = 0; i < allowed.length(); i++)
        chars.insert(allowed[i]);

    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        int j;
        for (j = 0; j < words[i].length(); j++)
        {
            if (chars.find(words[i][j]) == chars.end())
                break;
        }

        if (j == words[i].length())
            count++;
    }

    return count;
}