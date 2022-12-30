// linear search
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a[10], i, n, flag = 0;
    //  clrscr();
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (a[i] == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");
    getch();
}
