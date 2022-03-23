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

// New Solution
class Solution
{
public:
    ListNode<int> *mergeTwoLists(ListNode<int> *list1, ListNode<int> *list2)
    {
        if (!list1)
            return list2;

        if (!list2)
            return list1;

        ListNode<int> *l1 = list1, *l2 = list2;
        ListNode<int> *dummy = new ListNode<int>(0), *curr = dummy;

        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                curr->next = l1;
                l1 = l1->next;
                curr = curr->next;
            }
            else
            {
                curr->next = l2;
                l2 = l2->next;
                curr = curr->next;
            }
        }

        if (l1)
            curr->next = l1;

        if (l2)
            curr->next = l2;

        return dummy->next;
    }
};