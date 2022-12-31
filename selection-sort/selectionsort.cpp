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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
