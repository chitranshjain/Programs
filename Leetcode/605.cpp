#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int count = 0;

    if (n == 0)
        return true;

    if (flowerbed.size() == 1)
    {
        if (flowerbed[0] == 0 && n <= 1)
            return true;
        else
            return false;
    }

    for (int i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 0)
        {
            if (i == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
            else if (i == flowerbed.size() - 1 && flowerbed[i - 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
            else
            {
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
                {
                    count++;
                    flowerbed[i] = 1;
                }
            }
        }
    }

    return count >= n;
}

int main()
{
    int n, n1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> n1;
    cout << canPlaceFlowers(arr, n1);
}