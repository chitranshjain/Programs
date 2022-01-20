#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool valid = true;

    for (int i = 0; i < s.length();)
    {
        if (s[i] == '1' && s[i + 1] != '4')
        {
            // cout<<"CASE 1"<<endl;
            i++;
        }
        else if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] != '4')
        {
            // cout<<"CASE 2"<<endl;
            i = i + 2;
        }
        else if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4' && s[i + 3] != '4')
        {
            // cout<<"CASE 3"<<endl;
            i = i + 3;
        }
        else
        {
            // cout<<"CASE 4"<<endl;
            valid = false;
            break;
        }
    }

    if(valid) 
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}