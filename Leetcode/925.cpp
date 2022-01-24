#include <bits/stdc++.h>
using namespace std;

bool isLongPressedName(string name, string typed)
{
    bool valid = true;
    int index = 0;

    if (typed.length() < name.length())
        return false;

    for (int i = 0; i < typed.length();)
    {
        if (index < name.length())
        {
            if (name[index] == typed[i])
            {
                index++;
                i++;
            }
            else
            {
                if (index != 0 && typed[i] == name[index - 1])
                    i++;
                else
                {
                    valid = false;
                    break;
                }
            }
        }
        else
        {
            if (typed[i] != name[name.length() - 1])
                valid = false;

            i++;
        }
    }

    if (index < name.length())
        return false;

    return valid;
}