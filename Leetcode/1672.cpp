#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0, current = 0;
        for(int i=0;i<accounts.size();i++)
        {
            current = 0;
            for(int j=0;j<accounts[i].size();j++)
            {
                current = current + accounts[i][j];
            }
            
            richest = max(richest, current);
        }
        
        return richest;
    }
};