#include <bits/stdc++.h>
#include <ListNode.h>
using namespace std;

class Solution
{
public:
    ListNode<int> *reverseList(ListNode<int> *head)
    {
        ListNode<int> *prev = NULL, *curr = head, *next = NULL;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode<int> *addTwoNumbers(ListNode<int> *l1, ListNode<int> *l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode<int> *dummy = new ListNode<int>(-1), *tail = dummy;
        int carry = 0;

        while (l1 || l2)
        {
            int sum = 0;
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;

            carry = sum / 10;
            sum = sum % 10;

            tail->next = new ListNode<int>(sum);
            tail = tail->next;
        }

        if (carry)
        {
            tail->next = new ListNode<int>(carry);
        }

        dummy->next = reverseList(dummy->next);

        return dummy->next;
    }
};

// Stack Solution

class Solution
{
public:
    ListNode<int> *addTwoNumbers(ListNode<int> *l1, ListNode<int> *l2)
    {
        stack<int> s1, s2, s3;

        while (l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }

        while (l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        while (!s1.empty() && !s2.empty())
        {
            int add = carry + s1.top() + s2.top();
            carry = add / 10;
            add %= 10;
            s3.push(add);
            s1.pop();
            s2.pop();
        }

        while (!s1.empty())
        {
            int add = carry + s1.top();
            carry = add / 10;
            add %= 10;
            s3.push(add);
            s1.pop();
        }

        while (!s2.empty())
        {
            int add = carry + s2.top();
            carry = add / 10;
            add %= 10;
            s3.push(add);
            s2.pop();
        }

        if (carry)
        {
            s3.push(carry);
        }

        ListNode<int> *dummy = new ListNode<int>(-1), *tail = dummy;

        while (!s3.empty())
        {
            tail->next = new ListNode<int>(s3.top());
            tail = tail->next;
            s3.pop();
        }

        return dummy->next;
    }
};