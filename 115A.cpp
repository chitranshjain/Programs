#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> employees(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>employees[i];
    }

    unordered_set<int> groups;

    for(int i=0;i<n;i++)
    {
        groups.insert(employees[i]);
    }

    cout<<groups.size();
}