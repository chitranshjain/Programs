#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        unordered_set<char> s;
        for (auto l : sentence)
            s.insert(l);

        return s.size() == 26;
    }
};