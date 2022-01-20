#include <bits/stdc++.h>
using namespace std;

int minMovesToSeat(vector<int> &seats, vector<int> &students)
{
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    int moves = 0;
    for (int i = 0; i < seats.size(); i++)
    {
        moves = moves + abs(students[i] - seats[i]);
    }

    return moves;
}