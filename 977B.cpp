#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxFreq = 0, currentFreq = 0;
    string res;

    for (int i = 0; i < n - 1; i++)
    {
        currentFreq = 1;
        for(int j=i+1;j<n;j++)
        {
            if(s[i] == s[j] && s[i+1] == s[j+1])
            {
                currentFreq++;
            }
        }

        if(currentFreq > maxFreq)
        {
            res = "";
            res = res + s[i] + s[i+1];
            maxFreq = currentFreq;
        }
    }

    cout<<res;
}