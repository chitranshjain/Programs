#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    reverse(arr.begin(), arr.end());
    printArray(arr);

    int index = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[index], arr[index - 1]);
        printArray(arr);
        index--;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}