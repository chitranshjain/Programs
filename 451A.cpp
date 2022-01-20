#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool akshatWins = false;

    while(n > 0 && m > 0)
    {
        n--;
        m--;
        akshatWins = !akshatWins;
    }

    if(akshatWins)
    {
        cout<<"Akshat";
    }
    else
    {
        cout<<"Malvika";
    }
}