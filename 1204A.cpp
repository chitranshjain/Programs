#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int res = 0;
    if (s.length() == 1 && s != "0")
        res++;
    else
        for (int i = s.length() - 1; i >= 0; i = i - 2)
            res++;

    cout << res;
}