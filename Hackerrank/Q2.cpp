#include <bits/stdc++.h>
using namespace std;

double findAverage(vector<int> arr)
{
    int count = 0, sum = 0, n = arr.size();
    double avg;
    int minElement = *min_element(arr.begin(), arr.end());
    int maxElement = *max_element(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minElement || arr[i] == maxElement)
        {
            sum += arr[i];
            count++;
        }
    }

    avg = sum / (double)count;
    return avg;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findAverage(arr);
}