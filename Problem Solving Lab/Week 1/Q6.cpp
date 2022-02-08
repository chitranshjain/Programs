#include <bits/stdc++.h>
using namespace std;

class ZooAnimal
{
public:
    char *name;
    int cageNumber, weigthDate, weight;

    ZooAnimal(string n, int c, int wD, int w)
    {
        name = new char[20];
        name = &n[0];
        cageNumber = c;
        weigthDate = wD;
        weight = w;
    }
};

int main()
{
    ZooAnimal z("Zebra", 12, 7, 80);
    cout << "Name = " << z.name << ", Cage number = " << z.cageNumber << ", Weight date = " << z.weigthDate << ", Weight = " << z.weight << endl;
}