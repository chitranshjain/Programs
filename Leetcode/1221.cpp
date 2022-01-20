#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s)
{
    int countR = 0, countL = 0, splits = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            countL++;
        else
            countR++;

        if (countL == countR)
        {
            splits++;
            countL = 0;
            countR = 0;
        }
    }

    return splits;
}

int main()
{
    string s;
    cin>>s;

    cout<<balancedStringSplit(s)<<endl;
}