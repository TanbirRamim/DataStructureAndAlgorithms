// stack
// stack is a linear data structure which follows a particular order in which the operations are performed.
// The order may be LIFO(Last In First Out) or FILO(First In Last Out).
// Mainly the following three basic operations are performed in the stack:
// Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
// Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
// Peek or Top: Returns top element of stack.

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int top;

public:
    int a[MAX];
    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};
bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }
}
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
bool Stack::isFull()
{
    return (top >= MAX - 1);
}
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack" << endl;
    cout << "Top element is " << s.peek() << endl;
    cout << "Stack is empty " << s.isEmpty() << endl;
    cout << "Stack is full " << s.isFull() << endl;
    return 0;
}
