#include <bits/stdc++.h>
#include <unordered_map>
#include <iterator>
using namespace std;

char findTheDifference(string s, string t)
{
    unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]--;

    for (int i = 0; i < t.length(); i++)
        freq[t[i]]++;

    char ans;
    for (auto x : freq)
        if (x.second > 0)
            ans = x.first;

    return ans;
}