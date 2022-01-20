#include <bits/stdc++.h>
using namespace std;

int minimumCoinsNeeded(vector<int> arr)
{
    int coins = 0, sum = 0, myMoney = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum = sum + arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>() );

    int index = 0;
    while(myMoney <= sum && index < arr.size())
    {
        myMoney = myMoney + arr[index];
        sum = sum - arr[index];
        coins++;
        index++;
    }

    return coins;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<minimumCoinsNeeded(arr);
}