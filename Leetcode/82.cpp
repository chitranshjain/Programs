#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *dummy = new ListNode(-1);

        ListNode *tail = dummy, *temp = head, *prev = NULL;

        while (temp && temp->next)
        {

            if ((prev != NULL && temp->val == prev->val) || temp->val == temp->next->val)
            {
                prev = temp;
                temp = temp->next;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
                prev = temp;
                temp = temp->next;
            }
        }

        if (temp->val != prev->val)
        {
            tail->next = temp;
            tail = tail->next;
        }

        tail->next = NULL;

        return dummy->next;
    }
};