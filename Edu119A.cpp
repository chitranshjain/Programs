#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    unordered_map<char, int> myMap;

    myMap['E'] = 0;
    myMap['N'] = 0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'N')
        {
            myMap['N']++;
        }
    }

    if(myMap['N'] == 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}