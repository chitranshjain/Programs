#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        reverse(digits.begin(), digits.end());
        int n = digits.size();

        int carry = (digits[0] + 1) / 10;
        digits[0] = (digits[0] + 1) % 10;
        for (int i = 1; i < n; i++)
        {
            int sum = digits[i] + carry;
            carry = sum / 10;
            sum %= 10;

            digits[i] = sum;
        }

        if (carry)
        {
            digits.push_back(carry);
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};