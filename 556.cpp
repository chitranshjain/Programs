#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int countZero = 0, countOne = 0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0')
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }

    cout<<abs(countOne - countZero);
}