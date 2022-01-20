#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pos, neg, zero;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else
            zero.push_back(x);
    }

    long long int coins = 0;
    for (int i = 0; i < neg.size(); i++)
    {
        coins += -1 - neg[i];
    }

    for (int i = 0; i < pos.size(); i++)
    {
        coins += pos[i] - 1;
    }

    if(zero.size() >= 1)
    {
        coins = coins + zero.size();
    }

    if(neg.size() >= 1 && neg.size() % 2 != 0)
    {
        if(zero.size() == 0)
        {
            coins = coins + 2;
        }
    }

    cout<<coins;
}