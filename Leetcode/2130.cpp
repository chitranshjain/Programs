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
        val = x;
        next = n;
    }
};

int pairSum(ListNode *head)
{
    vector<int> arr;
    while (head != NULL)
    {
        arr.push_back(head->val);
        head = head->next;
    }

    int res = INT_MIN;
    for (int i = 0; i < arr.size() / 2; i++)
        res = max(res, arr[i] + arr[arr.size() - i - 1]);

    return res;
}