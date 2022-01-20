#include <bits/stdc++.h>
using namespace std;

class ParkingSystem
{

    int bigCars;
    int mediumCars;
    int smallCars;

public:
    ParkingSystem(int big, int medium, int small)
    {
        bigCars = big;
        mediumCars = medium;
        smallCars = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1 && bigCars > 0)
        {
            bigCars--;
            return true;
        }
        else if (carType == 2 && mediumCars > 0)
        {
            mediumCars--;
            return true;
        }
        else if (carType == 3 && smallCars > 0)
        {
            smallCars--;
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */