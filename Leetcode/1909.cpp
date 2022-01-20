#include <bits/stdc++.h>
using namespace std;

bool canBeIncreasing(vector<int> &nums)
{
    bool valid = false;
    for (int i = 0; i < nums.size(); i++)
    {
        bool innerValid = true;
        for (int j = 0; j < nums.size() - 1; j++)
        {
            if (i == j)
            {
                if (i != 0)
                {
                    if (nums[j - 1] >= nums[j + 1])
                    {
                        cout << "Con 1" << endl;
                        cout << "False for " << nums[j - 1] << " and " << nums[j + 1] << " at i = " << i << endl;
                        innerValid = false;
                        break;
                    }
                }
            }
            else if (nums[j] >= nums[j + 1] && j + 1 != i)
            {
                cout << "Con 2" << endl;
                cout << "False for " << nums[j] << " and " << nums[j + 1] << endl;
                innerValid = false;
                break;
            }
        }

        cout << "Validity for i = " << i << " " << innerValid << endl;

        if (innerValid)
        {
            valid = true;
            break;
        }
    }

    return valid;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << canBeIncreasing(arr);
}