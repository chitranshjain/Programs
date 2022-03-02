#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a, b;
    cin >> a >> b;

    ll sum = a + b;
    string a_string = to_string(a), b_string = to_string(b), sum_string = to_string(sum);

    string a_new = "", b_new = "", sum_new = "";

    for (ll i = 0; i < a_string.length(); i++)
        if (a_string[i] != '0')
            a_new = a_new + a_string[i];

    for (ll i = 0; i < b_string.length(); i++)
        if (b_string[i] != '0')
            b_new = b_new + b_string[i];

    for (ll i = 0; i < sum_string.length(); i++)
        if (sum_string[i] != '0')
            sum_new = sum_new + sum_string[i];

    if (stoi(a_new) + stoi(b_new) == stoi(sum_new))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}