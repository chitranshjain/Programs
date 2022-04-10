#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    void deleteNode(ListNode<int> *node)
    {
        ListNode<int> *temp = node;

        while (temp->next->next)
        {
            temp->val = temp->next->val;
            temp = temp->next;
        }

        temp->val = temp->next->val;

        ListNode<int> *next = temp->next;
        temp->next = NULL;

        delete (next);
    }
};

// Solution 2

class Solution
{
public:
    void deleteNode(ListNode<int> *node)
    {
        ListNode<int> *temp = node;

        temp->val = temp->next->val;
        ListNode<int> *next = temp->next;

        temp->next = next->next;

        delete (next);
    }
};