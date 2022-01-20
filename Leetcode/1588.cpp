#include <bits/stdc++.h>
using namespace std;

int sumOddLengthSubarrays(vector<int> &arr)
{
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
        sum = sum + (((((i + 1) * (n - i)) + 1) / 2) * arr[i]);

    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumOddLengthSubarrays(arr);
}