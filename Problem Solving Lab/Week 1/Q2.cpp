#include <bits/stdc++.h>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;

    Fraction()
    {
        numerator = denominator = 0;
    }

    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
};

int compareFractions(Fraction a, Fraction b)
{
    double fa = (double)a.numerator / (double)a.denominator;
    double fb = (double)b.numerator / (double)b.denominator;

    if (fa == fb)
        return 0;
    else if (fa < fb)
        return -1;
    else
        return 1;
}

int main()
{
    Fraction a(3, 4), b(6, 8);
    cout << compareFractions(a, b);
}