#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string> > &items, string ruleKey, string ruleValue)
{
    int index = 0;
    if (ruleKey == "type")
        index = 0;
    else if (ruleKey == "color")
        index = 1;
    else
        index = 2;

    int matching = 0;
    for (int i = 0; i < items.size(); i++)
    {
        vector<string> item = items[i];
        if (item[index] == ruleValue)
            matching++;
    }

    return matching;
}