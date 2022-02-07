#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool myCompate(vector<string> a, vector<string> b)
{
    stringstream s1(a[0]), s2(b[0]);
    int x;
    s1 >> x;
    int y;
    s2 >> y;
    return x < y;
}

class Solution
{
public:
    vector<vector<string> > displayTable(vector<vector<string> > &orders)
    {
        unordered_map<string, unordered_map<string, int> > m;
        unordered_set<string> items;
        vector<string> itemsVector;
        for (int i = 0; i < orders.size(); i++)
        {
            string table = orders[i][1];
            string item = orders[i][2];
            m[table][item]++;
            items.insert(item);
        }

        for (auto x : items)
            itemsVector.push_back(x);

        sort(itemsVector.begin(), itemsVector.end());

        vector<vector<string> > ans;
        for (auto x : m)
        {
            vector<string> a;
            string tableNum = x.first;
            a.push_back(tableNum);

            for (int i = 0; i < itemsVector.size(); i++)
            {
                char itemFreq = x.second[itemsVector[i]] + '0';
                string freq = "";
                freq = freq + itemFreq;
                a.push_back(freq);
            }
            ans.push_back(a);
        }

        vector<string> vec;
        vec.push_back("Table");

        for (int i = 0; i < itemsVector.size(); i++)
            vec.push_back(itemsVector[i]);

        ans.insert(ans.begin(), vec);

        sort(ans.begin(), ans.end(), myCompate);

        return ans;
    }
};