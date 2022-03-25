#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int low = 0, high = people.size() - 1, res = 0, curr = people[high], currPeople = 1;

        high--;

        while (low <= high)
        {
            if (currPeople == 2)
            {
                currPeople = 0;
                curr = 0;
                res++;
            }

            if (curr + people[high] <= limit)
            {
                curr += people[high];
                high--;
                currPeople++;
            }
            else if (curr + people[low] <= limit)
            {
                curr += people[low];
                low++;
                currPeople++;
            }
            else
            {
                curr = 0;
                currPeople = 0;
                res++;
            }
        }

        return res + 1;
    }
};