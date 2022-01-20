#include <bits/stdc++.h>
using namespace std;

bool emptyPossible(string s)
{
    int countA=0,countB=0,countC=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            countA++;
        }
        else if(s[i]=='B')
        {
            countB++;
        }
        else
        {
            countC++;
        }
    }

    return countB == (countC+countA);
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        if(emptyPossible(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}