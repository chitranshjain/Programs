#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0, current = 0;
        for(int i=0;i<sentences.size();i++)
        {
            current = 0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j] == ' ')
                {
                    current++;
                }
            }
            
            res = max(res, current);
        }
        
        return res + 1;
    }
};