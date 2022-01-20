#include <bits/stdc++.h>
using namespace std;

int main()
{
    string shift;
    getline(cin, shift);
    string str;
    getline(cin,str);

    int indexShift;

    if (shift[0] == 'R')
    {
        indexShift = -1;
    }
    else
    {
        indexShift = 1;
    }

    char keyboard[] = {'q',
                       'w',
                       'e',
                       'r',
                       't',
                       'y',
                       'u',
                       'i',
                       'o',
                       'p',
                       'a',
                       's',
                       'd',
                       'f',
                       'g',
                       'h',
                       'j',
                       'k',
                       'l',
                       ';',
                       'z',
                       'x',
                       'c',
                       'v',
                       'b',
                       'n',
                       'm',
                       ',',
                       '.',
                       '/'};


    string correctInput = "";

    int keyboardSize = sizeof(keyboard) / sizeof(keyboard[0]);

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < keyboardSize; j++)
        {
            if (keyboard[j] == str[i])
            {
                correctInput = correctInput + keyboard[j + indexShift];
            }
        }
    }

    cout << correctInput << endl;
}