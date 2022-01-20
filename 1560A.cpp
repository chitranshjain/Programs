#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> generateLikedElements()
{
    vector<int> res;
    int curr = 1, count = 0;
    while(count < 1000)
    {
        if (curr % 3 == 0 || curr % 10 == 3)
        {
            curr++;
        }
        else
        {
            res.push_back(curr++);
            count++;
        }
    }

    return res;
}

int main()
{
    int t;
    vector<int> likedElements = generateLikedElements();
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << likedElements[x - 1] << endl;
    }

    return 0;
}