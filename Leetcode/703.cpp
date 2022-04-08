#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
public:
    int kTh;
    priority_queue<int, vector<int>, greater<int> > pq;

    KthLargest(int k, vector<int> &nums)
    {
        kTh = k;
        for (int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);
    }

    int add(int val)
    {
        pq.push(val);
        while (pq.size() > kTh)
            pq.pop();

        return pq.top();
    }
};