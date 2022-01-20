#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = NULL;
    }

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode *n)
    {
        val = 0;
        next = n;
    }
};

int getDecimalValue(ListNode *head)
{
    string s = "";

    while (head != NULL)
    {
        char x = ((char)(head->val)) + '0';
        s = s + x;
        head = head->next;
    }

    reverse(s.begin(), s.end());

    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - '0';
        num = num + x * pow(2, i);
    }

    return num;
}