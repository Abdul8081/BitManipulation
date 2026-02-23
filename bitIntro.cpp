#include <bits/stdc++.h>
using namespace std;

int main()
{
    // extracting LSB bit
    int n = 10; // 1010

    // n = 11; // 1011
    cout << (n & 1);

    // also we can do the same by n % 2
    cout << (n % 2);
}