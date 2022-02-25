#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int numSplits(string s)
{
    unordered_map<char, int> m1, m2;
    for (int i = 0; i < s.length(); i++)
        m2[s[i]]++;

    int ans = 0, distm2 = m2.size();

    for (int i = 0; i < s.length(); i++)
    {
        m1[s[i]]++;
        m2[s[i]]--;

        if (m2[s[i]] == 0)
            distm2--;

        if (m1.size() == distm2)
            ans++;
    }
    cout << endl;
    return ans;
}