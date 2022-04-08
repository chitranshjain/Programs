#include <bits/stdc++.h>
#include <unordered_set>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *getIntersectionNode(ListNode<int> *headA, ListNode<int> *headB)
    {
        unordered_set<ListNode<int> *> nodes;

        while (headA || headB)
        {
            if (headA)
            {
                if (nodes.find(headA) != nodes.end())
                    return headA;
                else
                {
                    nodes.insert(headA);
                    headA = headA->next;
                }
            }

            if (headB)
            {
                if (nodes.find(headB) != nodes.end())
                    return headB;
                else
                {
                    nodes.insert(headB);
                    headB = headB->next;
                }
            }
        }

        return NULL;
    }
};