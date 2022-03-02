#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pages;
    cin >> pages;

    vector<int> days(7);
    for (int i = 0; i < 7; i++)
        cin >> days[i];

    int day = 1;
    while (pages > 0)
    {
        pages -= days[day - 1];
        if (pages <= 0)
            break;

        day++;

        if (day > 7)
            day = 1;
    }

    cout << day << endl;
}