#include <bits/stdc++.h>
using namespace std;

char change_case(char c)
{
    if (isupper(c))
        return tolower(c);
    else
        return toupper(c);
}

int main()
{
    string s;
    cin >> s;

    int upperCount = 0;
    for (int i = 0; i < s.length(); i++)
        if (isupper(s[i]))
            upperCount++;

    if (upperCount == s.length() || (upperCount == s.length() - 1 && islower(s[0])) || s.length() == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = change_case(s[i]);
        }
    }

    cout<<s;
}