#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> raze, breach;
    for (int i = 1; i <= n; i++)
    {
        char x;
        cin >> x;
        if (i % 2 == 0)
            breach.push_back(x - '0');
        else
            raze.push_back(x - '0');
    }

    int razeSize = raze.size(), breachSize = breach.size();
    int index = 0;
    for (int i = 0; i < razeSize; i++)
        if (raze[i] % 2 == 0)
        {
            swap(raze[index], raze[i]);
            index++;
        }

    index = 0;
    for (int i = 0; i < breachSize; i++)
        if (breach[i] % 2 != 0)
        {
            swap(breach[index], breach[i]);
            index++;
        }

    bool razeTurn = true;
    int razeIndex = 0, breachIndex = 0;
    while (n > 1)
    {
        if (razeTurn)
            razeIndex++;
        else
            breachIndex++;

        razeTurn = !razeTurn;
        n--;
    }

    int remainingDigit;
    if (razeIndex == razeSize)
        remainingDigit = breach[breachSize - 1];
    else
        remainingDigit = raze[razeSize - 1];

    if (remainingDigit % 2 == 0)
        cout << 2 << endl;
    else
        cout << 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}