#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string hello = "hello";

    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == hello[index])
            index++;

        if (index == 5)
            break;
    }

    if (index == 5)
        cout << "YES";
    else
        cout << "NO";
}