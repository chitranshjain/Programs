#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fives = 0, zeroes = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            zeroes++;
        else
            fives++;
    }

    if (zeroes == 0)
        cout << -1;
    else if (fives < 9)
        cout << 0;
    else
    {
        int numFives = fives - (fives % 9);
        for (int i = 0; i < numFives; i++)
            cout << 5;
        for (int i = 0; i < zeroes; i++)
            cout << 0;
    }
}