// binary search algorithm
// 1. sort the array
// 2. find the middle element
// 3. if the middle element is the target, return the index
// 4. if the middle element is greater than the target, search the left half
// 5. if the middle element is less than the target, search the right half
// 6. repeat steps 2-5 until the target is found or the array is empty
#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int target, int size);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, target, size);
    if (index == -1)
    {
        printf("Target not found");
    }
    else
    {
        printf("Target found at index %d", index);
    }
    return 0;
}
int binarySearch(int arr[], int target, int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (arr[middle] == target)
        {
            return middle;
        }
        else if (arr[middle] > target)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return -1;
}