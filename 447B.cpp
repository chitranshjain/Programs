#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    int vals[26];
    for (int i = 0; i < 26; i++)
        cin >> vals[i];

    int maxPoints = *max_element(vals, vals + 26);
    int maxScore = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        maxScore = maxScore + (i + 1) * (vals[index]);
    }

    for (int i = 0; i < k; i++)
    {
        maxScore = maxScore + (s.length() + i + 1) * maxPoints;
    }

    cout << maxScore;
}