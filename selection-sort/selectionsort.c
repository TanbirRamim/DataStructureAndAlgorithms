// selection sort algorithm
// 1. Find the smallest item in the array and exchange it with the first entry
// 2. Find the next smallest item and exchange it with the second entry
// 3. Continue in this way until the entire array is sorted
// 4. This method is called selection sort because it works by repeatedly selecting the smallest remaining item
// 5. The running time of selection sort is quadratic
// 6. It makes ~ N^2/2 compares and ~ N exchanges
// 7. Selection sort is insensitive to input
// 8. It is useful when memory write is a costly operation
// 9. It is also useful when the input is in the form of a stream

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, min, temp, n;
    int *a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}