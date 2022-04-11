#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *partition(ListNode<int> *head, int x)
    {
        ListNode<int> *lesserDummy = new ListNode<int>(-1), *greaterDummy = new ListNode<int>(-1);
        ListNode<int> *lesserTail = lesserDummy, *greaterTail = greaterDummy;

        ListNode<int> *temp = head;

        while (head)
        {
            if (head->val < x)
            {
                lesserTail->next = head;
                lesserTail = lesserTail->next;
            }
            else
            {
                greaterTail->next = head;
                greaterTail = greaterTail->next;
            }

            head = head->next;
        }

        lesserTail->next = greaterDummy->next;
        greaterTail->next = NULL;

        return lesserDummy->next;
    }
};