// write a program to calculate a^b in O(logn) time
#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}
