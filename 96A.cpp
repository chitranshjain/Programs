#include <bits/stdc++.h>
using namespace std;

bool isDangerous(string s)
{
    bool dangerous = false;
    int currItem = s[0], currCount = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] == currItem)
        {
            currCount++;
        }
        else
        {
            currItem = s[i];
            currCount = 1;
        }

        if(currCount >= 7)
        {
            dangerous = true;
            break;
        }
    }

    return dangerous;
}

int main()
{
    string s;
    cin >> s;

    if (isDangerous(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}