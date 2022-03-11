#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

int findLength(ListNode<int> *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }

    return len;
}

ListNode<int> *rotateRight(ListNode<int> *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    k = k % findLength(head);
    ListNode<int> *a = head, *b;

    int len = findLength(head);
    len = len - k - 1;

    if (k == 0 || len < 0)
        return head;

    while (len)
    {
        a = a->next;
        len--;
    }

    b = a->next;
    a->next = NULL;
    a = head;

    head = b;
    while (b && b->next)
        b = b->next;

    b->next = a;
    return head;
}