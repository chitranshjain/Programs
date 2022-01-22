#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    if (s.length() == 1 && (s[0] == '-' || (s[0] >= '0' && s[0] <= '9')))
        return false;

    int hyphenCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            return false;

        if (s[i] == '-')
        {
            if (i == s.length() - 1 || i == 0)
                return false;

            if (!(s[i - 1] >= 'a' && s[i - 1] <= 'z'))
                return false;

            if (!(s[i + 1] >= 'a' && s[i + 1] <= 'z'))
                return false;

            hyphenCount++;

            if (hyphenCount == 2)
                return false;
        }

        if (s[i] >= 'a' && s[i] <= 'z' || s[i] == '-')
            continue;
        else
        {
            if (i != s.length() - 1)
                return false;
        }
    }

    return true;
}

int countValidWords(string sentence)
{
    vector<string> words;
    sentence = sentence + ' ';
    string s = "";
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ')
            s = s + sentence[i];
        else
        {
            if (s != "")
                words.push_back(s);
            s = "";
        }
    }

    int validWords = 0;
    for (int i = 0; i < words.size(); i++)
        if (isValid(words[i]))
            validWords++;

    return validWords;
}

int main()
{
    string s;
    getline(cin, s);

    cout << countValidWords(s);
}