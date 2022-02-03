#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    string val;
    LinkedList *next;
    LinkedList *prev;

    LinkedList()
    {
        val = "";
        next = prev = NULL;
    }

    LinkedList(string s)
    {
        val = s;
        next = prev = NULL;
    }

    LinkedList(string s, LinkedList *n)
    {
        val = s;
        next = n;
        prev = NULL;
    }
};

class BrowserHistory
{
public:
    LinkedList *head;
    LinkedList *tail;

    BrowserHistory(string homepage)
    {
        head = new LinkedList(homepage);
        tail = head;
    }

    void visit(string url)
    {
        LinkedList *node = new LinkedList(url);
        node->prev = tail;
        tail->next = node;
        tail = tail->next;
    }

    string back(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (tail->prev == NULL)
                break;

            tail = tail->prev;
        }

        return tail->val;
    }

    string forward(int steps)
    {
        for (int i = 0; i < steps; i++)
        {
            if (tail->next == NULL)
                break;

            tail = tail->next;
        }

        return tail->val;
    }
};