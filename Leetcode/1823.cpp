#include <bits/stdc++.h>
using namespace std;

struct LinkedList
{
    int val;
    LinkedList *next;

    LinkedList()
    {
        val = 0;
        next = NULL;
    }

    LinkedList(int x)
    {
        val = x;
        next = NULL;
    }

    LinkedList(int x, LinkedList *n)
    {
        val = x;
        next = n;
    }
};

class Solution
{
public:
    vector<LinkedList *> createList(int n)
    {
        LinkedList *head = new LinkedList(1);
        LinkedList *temp = head;

        for (int i = 2; i <= n; i++)
        {
            LinkedList *node = new LinkedList(i);
            temp->next = node;
            temp = temp->next;
        }

        temp->next = head;
        vector<LinkedList *> ans;
        ans.push_back(head);
        ans.push_back(temp);

        return ans;
    }

    int findTheWinner(int n, int k)
    {
        vector<LinkedList *> ll = createList(n);
        int ans;
        LinkedList *start = ll[0], *prev = ll[1];
        while (start->next != start)
        {
            for (int i = 0; i < k - 1; i++)
            {
                prev = start;
                start = start->next;
            }

            prev->next = start->next;
            delete (start);
            start = prev->next;
        }

        ans = start->val;
        return ans;
    }
};