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