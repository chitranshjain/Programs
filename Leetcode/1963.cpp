#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwaps(string s)
    {
        int swaps = 0;
        int low = 0, high = s.length() - 1, opening = 0, closing = 0;

        while (low < high)
        {
            if (opening >= closing)
            {
                if (s[low] == '[')
                    opening++;
                else
                    closing++;

                low++;
            }

            if (opening < closing)
            {
                if (s[high] == '[')
                {
                    swaps++;
                    swap(s[high--], s[--low]);
                    low++;
                    opening++;
                    closing--;
                }
                else
                    high--;
            }
        }

        return swaps;
    }
};