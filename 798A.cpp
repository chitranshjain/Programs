#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int low = 0, high = s.length() - 1, count = 0;

    while (low < high)
    {
        if (s[low] != s[high])
            count++;

        low++;
        high--;
    }

    if (count > 1)
        cout << "NO";
    else if (count == 0 && s.length() % 2 == 0)
        cout << "NO";
    else
        cout << "YES" << endl;
}