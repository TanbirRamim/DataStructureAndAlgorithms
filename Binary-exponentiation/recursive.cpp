#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int tmp = power(a, b / 2);
    int result = tmp * tmp;
    if (b % 2 == 1)
        result *= a;
    return result;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}