#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s)
{
    vector<int> spaces;
    bool flag = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            flag = true;
            spaces.push_back(i);
        }
    }

    int numberOfWords;

    if (!flag)
        return s.substr(0, s.length() - 1);
    else
        numberOfWords = spaces.size() + 1;

    vector<string> str(numberOfWords);

    for (int i = 0; i < spaces.size(); i++)
    {
        int spaceIndex = spaces[i];
        int index = s[spaceIndex - 1] - '0';
        int targetIndex = index - 1;

        string sub;

        if (i != 0)
        {
            int prevSpaceIndex = spaces[i - 1];
            int length = spaceIndex - prevSpaceIndex - 2;
            sub = s.substr(prevSpaceIndex + 1, length);
        }
        else
        {
            sub = s.substr(0, spaces[i] - 1);
        }

        str[targetIndex] = sub;
    }

    int numberOfSpaces = spaces.size();
    int prevSpaceIndex = spaces[numberOfSpaces - 1];
    int targetIndex = s[s.length() - 1] - '0' - 1;
    int length = s.length() - prevSpaceIndex - 2;
    string sub = s.substr(prevSpaceIndex + 1, length);

    str[targetIndex] = sub;

    string res = "";
    for (int i = 0; i < str.size() - 1; i++)
    {
        res = res + str[i] + ' ';
    }

    res = res + str[str.size() - 1];

    return res;
}

int main()
{
    string s;
    getline(cin, s);

    cout << sortSentence(s);
}