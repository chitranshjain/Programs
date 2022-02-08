#include <bits/stdc++.h>
using namespace std;

int add(int a = 22, int b = 4)
{
    return a + b;
}

int main()
{
    int a = 2, b = 3;
    cout << "Function add called without passing any parameter = " << add() << endl;
    cout << "Function add called with one parameter = " << add(a) << endl;
    cout << "Function add called witho two parameters = " << add(a, b) << endl;
}