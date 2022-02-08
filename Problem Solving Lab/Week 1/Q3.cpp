#include <bits/stdc++.h>
using namespace std;

void tripleByValue(int count)
{
    // Here the variable count is a local variable to the function tripleByValue hence, the value of the variable count remains the same in the main function
    count = count * 3;
}

void tripleByReference(int &count)
{
    // Here, we have received the address the count variable declared in the main function and any changes to the count variable inside this function will be reflected in the main function too.
    count = count * 3;
}

int main()
{
    int count = 2;
    tripleByValue(count);
    cout << "Value after triple by value function call = " << count << endl;
    tripleByReference(count);
    cout << "Value after triple by reference function call = " << count << endl;
}