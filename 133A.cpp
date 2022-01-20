#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    bool output = false;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            output = true;
            break;
        }
    }

    if(output)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}