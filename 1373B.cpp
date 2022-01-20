#include <bits/stdc++.h>
using namespace std;

void solve()
{
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

    bool aliceWins = true;

    if(countZero == 0 || countOne == 0)
    {
        aliceWins = false;
    }

    int minFreq = min(countOne, countZero);

    if(minFreq % 2 == 0)
    {
        aliceWins = false;
    }

    if(aliceWins)
    {
        cout<<"DA"<<endl;
    }
    else
    {
        cout<<"NET"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}