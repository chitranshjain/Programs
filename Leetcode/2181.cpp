#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

ListNode<int> *mergeNodes(ListNode<int> *head)
{
    ListNode<int> *prevZero, *temp, *curr;
    int currVal = 0;

    prevZero = NULL;
    temp = head;
    head = NULL;

    while (temp)
    {
        if (temp->val == 0 && currVal != 0)
        {
            ListNode<int> *newNode = new ListNode<int>(currVal);
            currVal = 0;

            if (head == NULL)
                head = newNode;

            if (curr != NULL)
                curr->next = newNode;

            curr = newNode;
        }
        else
            currVal = currVal + temp->val;

        ListNode<int> *next = temp->next;
        delete (temp);

        temp = next;
    }

    return head;
}