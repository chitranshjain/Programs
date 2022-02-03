#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

int main()
{
    string s;
    cin >> s;

    string res = "";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
            continue;
        else
        {
            res = res + '.';
            res = res + s[i];
        }
    }

    cout << res;
}