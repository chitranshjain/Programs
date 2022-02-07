#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    unordered_map<string, int> encodeMap;
    unordered_map<int, string> decodeMap;
    int count;

    Solution()
    {
        count = 0;
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        encodeMap[longUrl] = count;
        decodeMap[count] = longUrl;
        count++;
        return to_string(encodeMap[longUrl]);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return decodeMap[stoi(shortUrl)];
    }
};