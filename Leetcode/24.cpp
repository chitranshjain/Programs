#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *swapPairs(ListNode *head)
{
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *node = dummy;

    while (node)
    {
        ListNode *first = node->next;
        ListNode *second = NULL;

        if (first != NULL)
            second = first->next;

        if (second != NULL)
        {
            ListNode *secondNext = second->next;
            second->next = first;
            node->next = second;
            first->next = secondNext;
            node = first;
        }
        else
            break;
    }

    return dummy->next;
}

// My method
ListNode *swapPairs(ListNode *head)
{
    ListNode *prev, *curr, *next, *ogHead;
    prev = head;
    ogHead = head;

    head = NULL;

    while (prev && prev->next)
    {
        curr = prev->next;
        next = curr->next;

        if (!head)
            head = curr;

        curr->next = prev;
        if (next && next->next)
            prev->next = next->next;
        else if (next)
            prev->next = next;
        else
            prev->next = NULL;

        if (next)
            prev = next;
    }

    if (head)
        return head;
    else
        return ogHead;
}