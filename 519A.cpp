#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> points;
    points['Q'] = 9;
    points['q'] = 9;
    points['R'] = 5;
    points['r'] = 5;
    points['B'] = 3;
    points['b'] = 3;
    points['N'] = 3;
    points['n'] = 3;
    points['P'] = 1;
    points['p'] = 1;
    points['.'] = 0;

    int totalPoints = 0;
    for (int i = 0; i < 64; i++)
    {
        char x;
        cin >> x;
        if (x >= 'a' && x <= 'z')
            totalPoints = totalPoints + points[x];
        else
            totalPoints = totalPoints - points[x];
    }

    if (totalPoints == 0)
        cout << "Draw";
    else if (totalPoints > 0)
        cout << "Black";
    else
        cout << "White";
}