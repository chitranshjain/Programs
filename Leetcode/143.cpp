#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *slow = head, *fast = head, *prev = slow;
        while (fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;
        return slow;
    }

    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *prev = NULL, *curr = head, *next;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    void reorderList(ListNode *head)
    {

        if (!head || !head->next)
            return;

        ListNode *mid = middleNode(head);
        mid = reverseList(mid);

        ListNode *dummy = new ListNode(0), *tail = dummy;

        while (head || mid)
        {
            if (head)
            {
                tail->next = head;
                head = head->next;
                tail = tail->next;
            }

            if (mid)
            {
                tail->next = mid;
                mid = mid->next;
                tail = tail->next;
            }
        }

        head = dummy->next;
    }
};