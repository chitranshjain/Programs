#include <bits/stdc++.h>
using namespace std;

int wateringPlants(vector<int> &plants, int capacity)
{
    int steps = 0, maxCapacity = capacity;
    for (int i = 0; i < plants.size(); i++)
    {
        steps++;
        capacity = capacity - plants[i];

        if (i < plants.size() - 1 && capacity < plants[i + 1])
        {
            steps = steps + 2 * (i + 1);
            capacity = maxCapacity;
        }
    }

    return steps;
}