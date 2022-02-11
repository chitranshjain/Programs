#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int cardsPerPlayer = n / k;
    int maximumPoints;

    if (cardsPerPlayer >= m)
        maximumPoints = m;
    else
    {
        int jokerFirst = cardsPerPlayer;
        int jokersRemaining = m - jokerFirst;
        int evenlyDividedJokers = ceil((double)jokersRemaining / (k - 1));
        int moreJokersDistributed = min(jokersRemaining, evenlyDividedJokers * (k - 1));
        jokersRemaining = jokersRemaining - moreJokersDistributed;
        int secondMaxJokers = evenlyDividedJokers + jokersRemaining;
        maximumPoints = jokerFirst - secondMaxJokers;
    }

    cout << maximumPoints << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}