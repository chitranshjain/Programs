#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class UndergroundSystem
{
public:
    unordered_map<int, pair<string, int> > transit;
    unordered_map<string, vector<int> > m;

    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        transit[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        int time = t - transit[id].second;
        string route = transit[id].first + " - " + stationName;
        m[route].push_back(time);
    }

    double getAverageTime(string startStation, string endStation)
    {
        string route = startStation + " - " + endStation;
        int totalTime = 0;

        for (auto i : m[route])
            totalTime += i;

        return ((1.0 * totalTime) / (1.0 * m[route].size()));
    }
};