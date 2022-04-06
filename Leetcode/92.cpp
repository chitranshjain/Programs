#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *reverseList(ListNode<int> *head)
    {
        if (!head || !head->next)
            return head;

        ListNode<int> *prev = NULL, *curr = head, *next = NULL;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode<int> *reverseBetween(ListNode<int> *head, int left, int right)
    {
        ListNode<int> *start, *prev = NULL, *end, *curr = head, *next;
        left -= 1;
        right -= 1;

        int i = 0;
        while (curr)
        {
            if (i == left - 1)
                prev = curr;

            if (i == left)
                start = curr;

            if (i == right)
                end = curr;

            curr = curr->next;

            i++;
        }

        next = end->next;
        end->next = NULL;

        ListNode<int> *reversed = reverseList(start);

        if (prev)
            prev->next = reversed;
        else
        {
            head = reversed;
            prev = reversed;
        }

        while (prev->next)
        {
            prev = prev->next;
        }

        if (next)
        {
            prev->next = next;
        }

        return head;
    }
};