#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *removeElements(ListNode<int> *head, int val)
    {
        ListNode<int> *dummy = new ListNode<int>(0);
        ListNode<int> *curr = dummy;

        while (head)
        {
            if (head->val != val)
            {
                curr->next = head;
                curr = curr->next;
            }

            head = head->next;
        }

        curr->next = NULL;

        return dummy->next;
    }
};