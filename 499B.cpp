#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> words;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        words[a] = b;
    }

    vector<string> lecture(n);
    for (int i = 0; i < n; i++)
        cin >> lecture[i];

    string res = "";
    for (int i = 0; i < n; i++)
    {
        string l2 = words[lecture[i]];
        if (lecture[i].length() <= l2.length())
            res = res + lecture[i] + " ";
        else
            res = res + l2 + " ";
    }

    cout << res << endl;
}