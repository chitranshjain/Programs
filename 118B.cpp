#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int outer = 0; outer <= n; outer++)
    {
        for (int i = n - outer; i > 0; i--)
        {
            cout << "  ";
        }

        int k;
        for (k = 0; k < outer; k++)
            cout << k << " ";

        cout << k;

        for (int counter = outer; counter > 0; counter--)
            cout << " " << counter - 1;

        cout << endl;
    }

    for (int outer = 0; outer < n; outer++)
    {
        for (int spaces = 0; spaces <= outer; spaces++)
            cout << "  ";

        int i;
        for (i = 0; i < n - outer - 1; i++)
            cout << i << " ";

        cout << i;

        for (i = n - outer - 2; i >= 0; i--)
            cout << " " << i;

        cout << endl;
    }
}