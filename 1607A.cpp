#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int timeTaken(string pat, string s)
{
    int lastPos;

    for(int i=0;i<26;i++)
    {
        if(pat[i] == s[0])
        {
            lastPos = i;
        }
    }
    int time = 0;

    for(int i=1;i<s.length();i++)
    {
        int currPos;
        char currChar = s[i];
        for(int j=0;j<26;j++)
        {
            if(currChar == pat[j])
            {
                currPos = j;
            }
        }

        time = time + abs(currPos - lastPos);
        lastPos = currPos;
    } 

    return time;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pat, s;
        cin>>pat;
        cin>>s;
        cout<<timeTaken(pat, s)<<endl;
    }

    return 0;
}