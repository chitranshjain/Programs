#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

ListNode<int> *middleNode(ListNode<int> *head)
{
    ListNode<int> *slow = head, *fast = head, *prev;
    prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = NULL;
    return slow;
}

ListNode<int> *merge(ListNode<int> *list1, ListNode<int> *list2)
{
    ListNode<int> *temp1 = list1, *temp2 = list2;
    ListNode<int> *dummy = new ListNode<int>(0);
    ListNode<int> *tail = dummy;

    while (temp1 && temp2)
    {
        if (temp1->val <= temp2->val)
        {
            tail->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            tail->next = temp2;
            temp2 = temp2->next;
        }

        tail = tail->next;
    }

    if (temp1)
        tail->next = temp1;
    else
        tail->next = temp2;

    return dummy->next;
}

ListNode<int> *sortList(ListNode<int> *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode<int> *mid = middleNode(head);
    ListNode<int> *left = sortList(head);
    ListNode<int> *right = sortList(mid);

    return merge(left, right);
}