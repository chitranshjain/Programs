#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> frequencies;

    for (int i = 0; i < n; i++)
    {
        frequencies[i] = 0;
    }

    bool valid = false;

    for (int i = 0; i < n; i++)
    {
        frequencies[i]++;

        if(frequencies[i] > 1)
        {
            valid = true;
            break;
        }
    }

    if(valid) 
    {
        
    }
    else
    {
        cout<<"-1"<<endl;
        return;
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
}