#include <bits/stdc++.h>

using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr)
{
    int totalSwaps = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            totalSwaps++;
            swap(arr[minIndex], arr[i]);
        }
    }

    return totalSwaps;
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

    cout<<minimumSwaps(arr)<<endl;

    return 0;
}