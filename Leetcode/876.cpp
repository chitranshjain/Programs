#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

ListNode<int> *middleNode(ListNode<int> *head)
{
    ListNode<int> *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}