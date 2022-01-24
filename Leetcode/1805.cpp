#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int numDifferentIntegers(string word)
{
    unordered_set<string> nums;

    string num = "";
    for (int i = 0; i < word.length(); i++)
    {
        char x = word[i];
        if (isdigit(x))
        {
            num = num + x;
        }
        else
        {
            if (num != "")
                nums.insert(num);

            num = "";
        }
    }

    if (num != "")
        nums.insert(num);

    // "xtimt5kqkz9osexe56ezwwninlyeeqsq5m99904os3ygs12t31n1et4uwzmt5kvv6teisobuxt10k33v1aaxysg4y8nsivxdp3fo9dr7x58m8uc4ofm41ai77u8cvzr5r3s97f5otns59ubqk57xwl00xsp9w2oodt6yxcbscloyr9c2su8gca1ly6rrjufm25luhxhesxwn7bk1as9na4cbabxk

    unordered_set<string> numbers;
    unordered_set<string>::iterator it;
    for (it = nums.begin(); it != nums.end(); it++)
    {
        string y = *it;
        cout << "y = " << y << endl;

        int firstIdx = -1;
        for (int i = 0; i < y.length(); i++)
            if (y[i] != '0' && firstIdx == -1)
                firstIdx = i;

        string res;
        if (firstIdx != -1)
            res = y.substr(firstIdx, y.length() - firstIdx);
        else
            res = "0";
        numbers.insert(res);
        cout << "y = " << y << " res = " << res << endl;
    }

    return numbers.size();
}

int main()
{
    string s;
    cin >> s;

    cout << numDifferentIntegers(s);
}