#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    int k;
    cin >> k;

    string s;
    cin >> s;

    unordered_map<char, int> freqs;
    for (int i = 0; i < s.length(); i++)
        freqs[s[i]]++;

    bool possible = true;
    for (auto x : freqs)
        if (x.second % k != 0)
        {
            possible = false;
            break;
        }

    if (!possible)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < k; i++)
        {
            for (auto x : freqs)
            {
                for (int j = 0; j < x.second / k; j++)
                    cout << x.first;
            }
        }
    }
}