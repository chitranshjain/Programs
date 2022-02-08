#include <bits/stdc++.h>
using namespace std;

int insertAtTarget(string s, string target, int targetIndex)
{
    string res = "";

    if (targetIndex >= s.length())
        return 0;

    res = res + s.substr(0, targetIndex );
    res = res + target;
    res = res + s.substr(targetIndex, s.length() - targetIndex);
    cout << res << endl;

    return 1;
}

int main()
{
    string s, target;
    int targetIndex;
    cin >> s >> target >> targetIndex;

    int res = insertAtTarget(s, target, targetIndex);
    if (res == 0)
        cout << "Insertion failed" << endl;
    else
        cout << "Insertion successful" << endl;
}