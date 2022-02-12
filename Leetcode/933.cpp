#include <bits/stdc++.h>
using namespace std;

class RecentCounter
{
public:
    deque<int> requests;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        requests.push_back(t);
        int lower = t - 3000;

        int it = 0;
        while (it < requests.size())
        {
            if (requests[it] < lower)
                requests.pop_front();
            else
                break;
        }

        return requests.size();
    }
};