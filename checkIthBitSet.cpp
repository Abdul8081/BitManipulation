#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 2;

    // this will distored the i, means this will make i as zero.
    // for (int i = 1; i <= 15; i++)
    // {
    //     cout << i << " : " << ((i >> k) & 1) << endl;
    // }

    // if we don't want to make the number as zero
    // this will tell corresponding bit 2's power.
    for (int i = 1; i <= 15; i++)
    {
        cout << i << " : " << (i & (1 << k)) << endl;
    }
}