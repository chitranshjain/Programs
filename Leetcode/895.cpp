#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class FreqStack
{
public:
    unordered_map<int, int> elementToFreq;
    unordered_map<int, stack<int> > freqToElements;
    int maxFreq;

    FreqStack()
    {
        maxFreq = 0;
    }

    void push(int val)
    {
        elementToFreq[val]++;
        freqToElements[elementToFreq[val]].push(val);

        maxFreq = max(maxFreq, elementToFreq[val]);
    }

    int pop()
    {
        int res = freqToElements[maxFreq].top();
        freqToElements[maxFreq].pop();
        elementToFreq[res]--;

        if (freqToElements[maxFreq].empty())
            maxFreq--;

        return res;
    }
};