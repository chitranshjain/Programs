#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *detectCycle(ListNode<int> *head)
    {
        ListNode<int> *slow = head, *fast = head;

        if (slow && slow->next)

            slow = slow->next;

        if (fast && fast->next)

            fast = fast->next->next;

        bool cycle = false;

        while (slow && fast && fast->next != NULL)

        {

            if (slow == fast)

            {
                cycle = true;
                break;
            }

            slow = slow->next;

            fast = fast->next->next;
        }

        if (cycle)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
        else
            return NULL;
    }
};