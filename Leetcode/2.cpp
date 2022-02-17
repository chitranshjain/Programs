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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head, *prev;
    head = NULL;
    int sum = 0, carry = 0;
    while (l1 || l2 || carry)
    {
        sum = 0;
        if (l1)
        {
            sum = sum + l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            sum = sum + l2->val;
            l2 = l2->next;
        }

        sum = sum + carry;

        int nodeVal = sum % 10;
        carry = sum / 10;

        ListNode *newNode = new ListNode(nodeVal);

        if (!head)
        {
            head = newNode;
            prev = newNode;
        }
        else
        {
            prev->next = newNode;
            prev = newNode;
        }
    }

    return head;
}