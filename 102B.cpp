#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int pass = 0;
    while (s.length() > 1)
    {
        pass++;

        long long int sum = 0;
        for (int i = 0; i < s.length(); i++)
            sum = sum + s[i] - '0';

        s = to_string(sum);
    }

    cout << pass << endl;
}