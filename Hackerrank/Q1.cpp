#include <bits/stdc++.h>
using namespace std;

int countOfElements(vector<int> arr)
{
    int sum = 0, count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int avg = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == avg)
            count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << countOfElements(arr);
}