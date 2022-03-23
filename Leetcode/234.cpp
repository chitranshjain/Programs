#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *middleNode(ListNode<int> *head)
    {
        if (!head)
            return head;

        ListNode<int> *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode<int> *reverse(ListNode<int> *head)
    {
        ListNode<int> *prev = NULL, *curr = head, *next;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode<int> *head)
    {
        ListNode<int> *mid = middleNode(head);
        ListNode<int> *revMid = reverse(mid);

        while (head && revMid)
        {
            if (head->val != revMid->val)
                return false;

            head = head->next;
            revMid = revMid->next;
        }

        return true;
    }
};