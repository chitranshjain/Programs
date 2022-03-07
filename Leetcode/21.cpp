#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

ListNode<int> *mergeTwoLists(ListNode<int> *list1, ListNode<int> *list2)
{
    ListNode<int> *temp1 = list1, *temp2 = list2;
    ListNode<int> *head, *curr;
    head = NULL;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val <= temp2->val)
        {
            if (head == NULL)
            {
                head = temp1;
                curr = head;
            }
            else
            {
                curr->next = temp1;
                curr = curr->next;
            }

            temp1 = temp1->next;
        }
        else if (temp1->val > temp2->val)
        {
            if (head == NULL)
            {
                head = temp2;
                curr = head;
            }
            else
            {
                curr->next = temp2;
                curr = curr->next;
            }

            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL)
    {
        if (head == NULL)
        {
            head = temp1;
            curr = head;
        }
        else
        {
            curr->next = temp1;
            curr = curr->next;
        }

        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        if (head == NULL)
        {
            head = temp2;
            curr = head;
        }
        else
        {
            curr->next = temp2;
            curr = curr->next;
        }

        temp2 = temp2->next;
    }

    return head;
}