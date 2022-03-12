#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node *random;

    Node(int x)
    {
        val = x;
        next = random = NULL;
    }
};

unordered_map<Node *, Node *> nodeMap;

void createNodes(Node *head)
{
    Node *prev = NULL;
    while (head)
    {
        Node *newNode = new Node(head->val);

        if (prev)
        {
            prev->next = newNode;
            prev = prev->next;
        }
        else
            prev = newNode;

        nodeMap[head] = newNode;
        head = head->next;
    }
}

void linkRandoms(Node *head)
{
    while (head)
    {
        Node *newNode = nodeMap[head];
        Node *newRandomNode = NULL;

        if (head->random)
            newRandomNode = nodeMap[head->random];

        newNode->random = newRandomNode;

        head = head->next;
    }
}

Node *copyRandomList(Node *head)
{
    createNodes(head);
    linkRandoms(head);
    return nodeMap[head];
}