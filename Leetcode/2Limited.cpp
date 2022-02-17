#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

long long int generateNumber(ListNode *head, long long int num)
{
    if (!head)
        return 0;

    num = generateNumber(head->next, num);
    num = num * 10 + head->val;
    return num;
}

ListNode *generateLinkedList(long long int num)
{
    if (num == 0)
        return NULL;

    ListNode *n = generateLinkedList(num);
    ListNode *head = new ListNode(num % 10);
    head->next = n;

    return head;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    long long int n1 = generateNumber(l1, 0);
    long long int n2 = generateNumber(l2, 0);
    long long int sum = n1 + n2;

    if (sum == 0)
        return new ListNode(0);
    else
        return generateLinkedList(sum);
}