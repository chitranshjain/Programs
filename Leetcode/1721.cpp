#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *swapNodes(ListNode *head, int k)
{
    ListNode *kThNodeFromBeginning = NULL, *kThNodeFromEnd = NULL;
    int numberOfNodes = 0, temp = k - 1;

    ListNode *tempNode = head;
    while (tempNode)
    {
        numberOfNodes++;
        if (temp == 0)
            kThNodeFromBeginning = tempNode;
        temp--;
        tempNode = tempNode->next;
    }

    kThNodeFromEnd = head;
    for (int i = 0; i < numberOfNodes - k; i++)
        kThNodeFromEnd = kThNodeFromEnd->next;

    temp = kThNodeFromBeginning->val;
    kThNodeFromBeginning->val = kThNodeFromEnd->val;
    kThNodeFromEnd->val = temp;

    return head;
}