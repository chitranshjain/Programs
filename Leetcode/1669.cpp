#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = NULL;
    }

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode *n)
    {
        val = x;
        next = n;
    }
};

ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    ListNode *listTwoEnd = NULL, *temp2 = list2;
    while (temp2->next != NULL)
        temp2 = temp2->next;

    listTwoEnd = temp2;

    ListNode *nodeA = NULL, *nodeB = NULL;
    ListNode *temp = list1;
    int count = 0;
    while (nodeA == NULL || nodeB == NULL)
    {
        if (count == a - 1)
            nodeA = temp;

        if (count == b - 1)
            nodeB = temp->next->next;

        temp = temp->next;
        count++;
    }

    nodeA->next = list2;
    listTwoEnd->next = nodeB;
    return list1;
}