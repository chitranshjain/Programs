#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    int n = s.length();
    vector<char> arr(n);
    int left = n;
    for (int i = 0; i < n - 1; i++)
    {
        char x = s[i];
        int pos = left / 2;
        if (left % 2 == 0)
        {
            arr[pos - 1] = x;
        }
        else
        {
            int inserted = n - left;
            arr[inserted + pos] = x;
        }

        left--;
    }

    arr[n - 1] = s[n - 1];
    for (int i = 0; i < n; i++)
        cout << arr[i];
}