#include <bits/stdc++.h>
using namespace std;

class CustomStack
{
public:
    int size;
    int top;
    vector<int> st;

    CustomStack(int maxSize)
    {
        size = maxSize;
        st.resize(maxSize);
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
            return;

        top++;
        st[top] = x;
    }

    int pop()
    {
        if (top == -1)
            return -1;

        int data = st[top];
        top--;
        return data;
    }

    void increment(int k, int val)
    {
        if (k > top)
            k = top + 1;

        for (int i = 0; i < k; i++)
            st[i] = st[i] + val;
    }
};