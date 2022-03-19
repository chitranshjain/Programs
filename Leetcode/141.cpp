#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    bool hasCycle(ListNode<int> *head)
    {
        ListNode<int> *slow = head, *fast = head;

        if (slow && slow->next)
            slow = slow->next;
        if (fast && fast->next)
            fast = fast->next->next;

        while (slow && fast && fast->next != NULL)
        {
            if (slow == fast)
                return true;

            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
    }
};