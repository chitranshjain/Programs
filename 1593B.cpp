#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int firstIdx = -1, secondIdx = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (firstIdx == -1)
        {
            if (s[i] == '0')
                firstIdx = i;
        }
        else
        {
            if (s[firstIdx] == '0' && (s[i] == '0' || s[i] == '5'))
            {
                secondIdx = i;
                break;
            }
        }
    }

    int thirdIdx = -1, fourthIdx = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (thirdIdx == -1)
        {
            if (s[i] == '5')
                thirdIdx = i;
        }
        else
        {
            if (s[thirdIdx] == '5' && (s[i] == '2' || s[i] == '7'))
            {
                fourthIdx = i;
                break;
            }
        }
    }

    long long int n = s.length();
    int a1 = n - 1 - firstIdx + firstIdx - secondIdx - 1;
    int a2 = n - 1 - thirdIdx + thirdIdx - fourthIdx - 1;
    cout << min(a1, a2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}