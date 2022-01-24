#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
#include <iterator>
using namespace std;

bool hasGroupsSizeX(vector<int> &deck)
{
    unordered_map<int, int> m;
    for (int i = 0; i < deck.size(); i++)
    {
        if (m.find(deck[i]) != m.end())
            m[deck[i]]++;
        else
            m[deck[i]] = 1;
    }

    int freq = 0;
    unordered_map<int, int>::iterator x;
    for (x = m.begin(); x != m.end(); x++)
    {
        int second = x->second;
        cout << "freq = " << freq << " x.second = " << second << " x.first = " << x->first << endl;
        if (second != 0)
        {
            if (freq == 0)
                freq = second;
            else if (freq != second)
            {
                if (__gcd(freq, second) != 1)
                    freq = __gcd(freq, second);
                else
                    return false;
            }
        }
    }

    if (freq < 2)
        return false;

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << hasGroupsSizeX(arr);
}