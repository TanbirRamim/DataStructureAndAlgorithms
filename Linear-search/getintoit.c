// linear search //
#include <stdio.h>
int linear_search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, x, arr[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int result = linear_search(arr, n, x);
    if (result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d", result);
    }
    return 0;
}