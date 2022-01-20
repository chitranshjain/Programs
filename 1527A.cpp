#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int largestPossibleK(int x)
{
    int power = -1;
    while(x)
    {
        x=x>>1;
        power++;
    }

    return pow(2,power)-1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<largestPossibleK(x)<<endl;
    }

    return 0;
}