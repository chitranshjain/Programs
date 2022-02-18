#include <bits/stdc++.h>
using namespace std;

string complexNumberMultiply(string num1, string num2)
{
    int a = 0, b, c = 0, d;
    int i = 0;
    bool signA = false, signB = false;

    if (num1[i] == '-')
    {
        signA = true;
        i++;
    }

    for (; i < num1.length(); i++)
    {
        if (num1[i] != '+')
            a = a * 10 + (num1[i] - '0');
        else
            break;
    }

    i++;
    b = stoi(num1.substr(i, num1.length() - i - 1));

    i = 0;
    if (num2[i] == '-')
    {
        signB = true;
        i++;
    }

    for (; i < num2.length(); i++)
    {
        if (num2[i] != '+')
            c = c * 10 + (num2[i] - '0');
        else
            break;
    }

    i++;
    d = stoi(num2.substr(i, num2.length() - i - 1));

    if (signA)
        a = -a;

    if (signB)
        c = -c;

    int x = (a * c) - (b * d);
    int y = (a * d) + (b * c);

    string res = "";
    res = res + to_string(x);
    res = res + '+';
    res = res + to_string(y);
    res = res + 'i';

    return res;
}