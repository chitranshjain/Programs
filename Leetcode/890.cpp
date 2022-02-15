#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> ans;

    vector<pair<int, char> > patternFrequencies;
    unordered_map<char, int> patternFrequencyMap;
    char x = pattern[0];
    int freq = 1;

    for (int i = 1; i < pattern.length(); i++)
    {
        if (pattern[i] == x)
            freq++;
        else
        {
            patternFrequencies.push_back(make_pair(freq, x));
            patternFrequencyMap[x] = patternFrequencyMap[x] + freq;
            x = pattern[i];
            freq = 1;
        }
    }

    patternFrequencies.push_back(make_pair(freq, x));
    patternFrequencyMap[x] = patternFrequencyMap[x] + freq;

    for (int i = 0; i < words.size(); i++)
    {
        vector<pair<int, char> > currentWordFrequencies;
        unordered_map<char, int> currentFrequencyMap;
        char x = words[i][0];
        int freq = 1;
        for (int j = 1; j < words[i].length(); j++)
        {
            if (words[i][j] == x)
                freq++;
            else
            {
                currentWordFrequencies.push_back(make_pair(freq, x));
                currentFrequencyMap[x] = currentFrequencyMap[x] + freq;
                x = words[i][j];
                freq = 1;
            }
        }

        currentWordFrequencies.push_back(make_pair(freq, x));
        currentFrequencyMap[x] = currentFrequencyMap[x] + freq;

        if (currentWordFrequencies.size() != patternFrequencies.size())
            continue;
        else
        {
            bool same = true;
            for (int j = 0; j < currentWordFrequencies.size(); j++)
            {
                int a = currentWordFrequencies[j].first, b = patternFrequencies[j].first;
                int c = currentFrequencyMap[currentWordFrequencies[j].second];
                int d = patternFrequencyMap[patternFrequencies[j].second];
                if (a != b || c != d)
                {
                    same = false;
                    break;
                }
            }

            if (same)
                ans.push_back(words[i]);
        }
    }

    return ans;
}