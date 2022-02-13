#include <bits/stdc++.h>
using namespace std;

int countVowelStrings(int n)
{
    int arr[] = {1, 1, 1, 1, 1};

    while (n--)
        for (int i = 3; i >= 0; i--)
            arr[i] = arr[i] + arr[i + 1];

    return arr[0];
}

int main()
{
    cout << countVowelStrings(39);
}