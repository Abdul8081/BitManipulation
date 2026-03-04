#include <bits/stdc++.h>
using namespace std;

int main()
{
    int idx = 2;
    for (int num = 1; num <= 20; num++)
    {
        cout << num << " : ";
        int del = (1 << idx);
        int num_which_needed_and = ~(del);
        cout << (num & num_which_needed_and) << endl;
    }
}

// always we count from LSB
// num = 1 1 0 0 
// i = 2
// 1 1 0 0
// delete : 1 << 2 -> 0 1 0 0
// ~ delete = 1 0 1 1
// num = num & (~ delete) : 1    0 0 0
// num = num ^ (1 << i) // toggle ith bit