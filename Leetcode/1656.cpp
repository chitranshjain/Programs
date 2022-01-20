#include <bits/stdc++.h>
using namespace std;

class OrderedStream
{
public:
    vector<string> result;
    int ptr = 0, maxSize;

    OrderedStream(int n)
    {
        result.resize(n);
        maxSize = n;
    }

    vector<string> insert(int idKey, string value)
    {
        result[idKey - 1] = value;
        vector<string> res;
        if (result[ptr] == "")
        {
            return res;
        }
        else
        {
            while (result[ptr] != "" && ptr < maxSize)
            {
                res.push_back(result[ptr]);
                ptr++;
            }

            return res;
        }
    }
};