#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int thirdMax(vector<int> &nums)
{
    unordered_set<int> number(nums.begin(), nums.end());

    unordered_set<int>::iterator it;
    vector<int> numbers;
    for (it = number.begin(); it != number.end(); it++)
        numbers.push_back(*it);

    int n = numbers.size();
    sort(numbers.begin(), numbers.end());
    if (n < 3)
        return numbers[n - 1];
    else
        return numbers[n - 3];
}