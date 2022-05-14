#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode *links[26];
    bool flag = false;

    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    void insertKey(char ch, TrieNode *node)
    {
        links[ch - 'a'] = node;
    }

    TrieNode *getNode(char ch)
    {
        return links[ch - 'a'];
    }

    bool isEnd()
    {
        return flag;
    }

    void setEnd()
    {
        flag = true;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!curr->containsKey(word[i]))
            {
                curr->insertKey(word[i], new TrieNode());
            }

            curr = curr->getNode(word[i]);
        }

        curr->setEnd();
    }

    bool search(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!curr->containsKey(word[i]))
            {
                return false;
            }

            curr = curr->getNode(word[i]);
        }

        if (curr != NULL)
            return curr->isEnd();

        return false;
    }

    bool startsWith(string word)
    {
        TrieNode *curr = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!curr->containsKey(word[i]))
            {
                return false;
            }

            curr = curr->getNode(word[i]);
        }

        return curr != NULL;
    }
};