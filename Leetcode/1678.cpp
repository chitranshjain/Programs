#include <bits/stdc++.h>
using namespace std;

string interpret(string s)
{
    string res = "";

    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'G')
        {
            res = res + 'G';
            i++;
        }
        else if (s[i] == '(' && s[i + 1] == ')')
        {
            res = res + 'o';
            i = i + 2;
        }
        else
        {
            res = res + "al";
            i = i + 4;
        }
    }

    return res;
}

int main()
{
    string n;
    cin>>n;
    cout<<interpret(n)<<endl;
}