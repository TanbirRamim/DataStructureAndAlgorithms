// linear search algorithm
// 1. Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
// 4. The time complexity of above algorithm is O(n)
// 5. Linear search is rarely used practically because other search algorithms such as the binary search algorithm and hash tables allow significantly faster searching comparison to Linear search
// 6. Linear search is used for searching in unsorted list
// 7. Linear search is also called sequential search
// 8. Linear search is the simplest, least efficient, basic, intuitive, elementary, straight forward and basic search algorithm

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element found at index: " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found" << endl;
    }
    return 0;
}