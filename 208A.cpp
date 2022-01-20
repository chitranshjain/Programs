#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i++;
            i++;
        }
        else
        {
            ans += s[i];
            if(s[i+1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
            {
                ans = ans + " ";
            }
        }
    }

    cout << ans;
}