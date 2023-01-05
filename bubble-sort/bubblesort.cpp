// bubble sort algorithm in c++ using vector, swap
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}