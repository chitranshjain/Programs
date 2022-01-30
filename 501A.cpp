#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mishya = max((3 * a / 10), (a - (a * c / 250)));
    int vasya = max((3 * b / 10), (b - (b * d / 250)));

    if (mishya > vasya)
        cout << "Misha";
    else if (vasya > mishya)
        cout << "Vasya";
    else
        cout << "Tie";
}