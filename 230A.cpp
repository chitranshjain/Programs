#include <bits/stdc++.h>
using namespace std;

struct Dragon
{
    int strength, bonus;
};

bool compare(Dragon a, Dragon b)
{
    return a.strength < b.strength;
}

int main()
{
    int strength, n;
    cin >> strength >> n;

    vector<Dragon> dragons(n);
    for (int i = 0; i < n; i++)
        cin >> dragons[i].strength >> dragons[i].bonus;

    sort(dragons.begin(), dragons.end(), compare);

    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        if (dragons[i].strength >= strength)
        {
            possible = false;
            break;
        }
        else
            strength = strength + dragons[i].bonus;
    }

    if (possible)
        cout << "YES";
    else
        cout << "NO";
}