#include <bits/stdc++.h>
using namespace std;

bool subSeq(string s, int idx1, string t, int idx2)
{
    if (idx2 < 0)
        return true;

    if (idx1 < 0)
        return false;

    if (s[idx1] == t[idx2])
        return subSeq(s, idx1 - 1, t, idx2 - 1);
    else
        return subSeq(s, idx1 - 1, t, idx2);
}

bool isSubsequence(string s, string t)
{
    swap(s, t);
    return subSeq(s, s.length() - 1, t, t.length() - 1);
}