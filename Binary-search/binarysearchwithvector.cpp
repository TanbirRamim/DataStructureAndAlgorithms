// binary search algorithm using vector
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> a;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int index = binarySearch(a, key);
    if (index != -1)
    {
        cout << "The element is present at index " << index << endl;
    }
    else
    {
        cout << "The element is not present in the array" << endl;
    }
    return 0;
}