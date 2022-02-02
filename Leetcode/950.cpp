#include <bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    sort(deck.begin(), deck.end());
    int n = deck.size();

    vector<int> ans(n);
    deque<int> dq;

    for (int i = 0; i < n; i++)
        dq.push_back(i);

    int index = 0;
    while (!dq.empty())
    {
        int x = dq.front();
        dq.pop_front();
        ans[x] = deck[index++];
        x = dq.front();
        dq.pop_front();
        dq.push_back(x);
    }

    return ans;
}