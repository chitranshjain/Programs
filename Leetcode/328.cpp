#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *oddEvenList(ListNode<int> *head)
    {
        ListNode<int> *evenDummy = new ListNode<int>(-1), *oddDummy = new ListNode<int>(-1);
        ListNode<int> *evenTail = evenDummy, *oddTail = oddDummy, *temp = head;

        for (int i = 0; head != NULL; i++)
        {
            if (i % 2 == 0)
            {
                oddTail->next = head;
                oddTail = oddTail->next;
            }
            else
            {
                evenTail->next = head;
                evenTail = evenTail->next;
            }

            head = head->next;
        }

        oddTail->next = evenDummy->next;
        evenTail->next = NULL;

        return oddDummy->next;
    }
};

// Concise Solution
class Solution
{
public:
    ListNode<int> *oddEvenList(ListNode<int> *head)
    {
        if (!head || !head->next)
            return head;

        ListNode<int> *odd = head, *even = head->next, *evenHead = head->next;

        while (even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};