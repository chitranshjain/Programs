#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int numPairsDivisibleBy60(vector<int> &time)
    {
        map<int, int> freq;
        for (int i = 0; i < time.size(); i++)
        {
            freq[time[i] % 60]++;
        }

        long long int ans = 0;
        map<int, int>::iterator it;
        for (it = freq.begin(); it != freq.end(); it++)
        {
            int needed = 60 - it->first;
            if (needed == it->first || needed == 60)
            {
                int x = it->second, y = it->second - 1;
                if (x % 2 == 0)
                    x /= 2;
                else
                    y /= 2;

                ans += x * y;
            }
            else
            {
                ans += it->second * freq[needed];
                freq[needed] = 0;
            }
        }

        return ans;
    }
};