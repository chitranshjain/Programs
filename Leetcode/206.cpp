#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

ListNode<int> *reverseList(ListNode<int> *head)
{
    ListNode<int> *prev, *curr, *next;
    prev = NULL;
    curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}