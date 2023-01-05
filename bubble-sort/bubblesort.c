// bubble sort algorithm in C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[MAX], n, i;
    clock_t start, end;
    double total_time;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    start = clock();
    bubble_sort(a, n);
    end = clock();
    total_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf(" Time taken: %f", total_time);
    return 0;
}
