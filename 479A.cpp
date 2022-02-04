#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxNum = 0;
    maxNum = a + b + c;
    maxNum = max(maxNum, a * (b + c));
    maxNum = max(maxNum, (a + b) * c);
    maxNum = max(maxNum, a * b * c);

    cout << maxNum;
}