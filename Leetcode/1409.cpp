#include <bits/stdc++.h>
using namespace std;

vector<int> processQueries(vector<int> &queries, int m)
{
    vector<int> p(m), ans(queries.size());
    for (int i = 0; i < m; i++)
        p[i] = i + 1;

    for (int i = 0; i < queries.size(); i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (p[j] == queries[i])
            {
                int temp = p[j];
                for (int k = j; k > 0; k--)
                    swap(p[k], p[k - 1]);

                p[0] = temp;
                break;
            }

        ans[i] = j;
    }

    return ans;
}