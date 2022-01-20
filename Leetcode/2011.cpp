#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        
        int inc = 0, dec = 0;
        
        for(int i=0;i<n;i++)
        {
            if(operations[i][1] == '+')
            {
                inc++;
            }
            else
            {
                dec++;
            }
        }
        
        return inc-dec;
    }
};