#include <bits/stdc++.h>
using namespace std;

class CombinationIterator
{
public:
    string characters;
    int combinationLength;
    vector<string> combinations;

    CombinationIterator(string characters, int combinationLength)
    {
        this->characters = characters;
        this->combinationLength = combinationLength;

        createCombinations("", characters, combinationLength, 0);
        unique(combinations.begin(), combinations.end());
    }

    void createCombinations(string temp, string characters, int combinationLength, int index)
    {
        if (index == characters.length())
        {
            if (temp.length() == combinationLength)
                combinations.push_back(temp);

            return;
        }

        createCombinations(temp, characters, combinationLength, index + 1);
        createCombinations(temp + characters[index], characters, combinationLength, index + 1);
    }

    string next()
    {
        string res = combinations.back();
        combinations.pop_back();
        return res;
    }

    bool hasNext()
    {
        return combinations.size();
    }
};