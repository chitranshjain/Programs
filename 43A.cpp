#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> goals;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        goals[s]++;
    }

    string t1, t2;
    int g1 = -1, g2 = 0;
    for (auto x : goals)
    {
        if (g1 == -1)
        {
            g1 = x.second;
            t1 = x.first;
        }
        else
        {
            g2 = x.second;
            t2 = x.first;
        }
    }

    if (g1 > g2)
        cout << t1;
    else
        cout << t2;
}