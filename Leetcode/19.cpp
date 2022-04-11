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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int numberOfNodes = 0;
    ListNode *temp = head;
    while (temp)
    {
        temp = temp->next;
        numberOfNodes++;
    }

    if (n == 1 && numberOfNodes == 1)
        return NULL;

    if (n == numberOfNodes)
        return head->next;

    temp = head;
    for (int i = 0; i < numberOfNodes - n - 1; i++)
        temp = temp->next;

    ListNode *nodeToBeDeleted;
    if (temp->next)
        nodeToBeDeleted = temp->next;
    else
        nodeToBeDeleted = temp;

    ListNode *nodeToBeLinked = NULL;

    if (nodeToBeDeleted && nodeToBeDeleted->next)
        nodeToBeLinked = nodeToBeDeleted->next;

    delete (nodeToBeDeleted);
    temp->next = nodeToBeLinked;

    return head;
}

// Better Solution

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp1 = head, *temp2 = head;

        for (int i = 0; i < n; i++)
        {
            temp1 = temp1->next;
        }

        if (!temp1)
        {
            return head->next;
        }

        while (temp1 && temp1->next)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        ListNode *next = temp2->next;

        if (next)
        {
            temp2->next = temp2->next->next;
            delete (next);
        }

        return head;
    }
};