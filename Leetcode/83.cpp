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

        ListNode *curr = head, *temp = head->next;

        while (temp)
        {
            if (curr->val != temp->val)
            {
                curr->next = temp;
                curr = curr->next;
            }

            temp = temp->next;
        }

        curr->next = NULL;

        return head;
    }
};