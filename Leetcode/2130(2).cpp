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

ListNode *reverseLinkedList(ListNode *head)
{
    ListNode *prev, *curr, *next;
    prev = NULL, curr = head;
    while (next != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int pairSum(ListNode *head)
{
    int numberOfNodes = 0;
    ListNode *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
        numberOfNodes++;
    }

    numberOfNodes = numberOfNodes / 2;
    numberOfNodes--;

    ListNode *secondHalf = NULL;
    curr = head;
    while (numberOfNodes--)
        curr = curr->next;

    secondHalf = curr->next;
    curr->next = NULL;
    secondHalf = reverseLinkedList(secondHalf);

    int res = 0;
    while (head != NULL)
    {
        int curr = head->val + secondHalf->val;
        res = max(res, curr);
        head = head->next;
        secondHalf = secondHalf->next;
    }

    return res;
}