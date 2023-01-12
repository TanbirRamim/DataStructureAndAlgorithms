// stack data structure
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int top = -1;
void push(int);
int pop();
int main()
{
    int i, n, x;
    printf("Enter the number of elements to be pushed: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element to be pushed: ");
        scanf("%d", &x);
        push(x);
    }
    printf("The elements in the stack are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", pop());
    }
    return 0;
}
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
        exit(0);
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
int pop()
{
    int x;
    if (top == -1)
    {
        printf("Stack Underflow");
        exit(0);
    }
    else
    {
        x = stack[top];
        top--;
        return x;
    }
}
