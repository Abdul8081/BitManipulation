#include<bits/stdc++.h>
using namespace std;

int main() {
    // for(int i=0; i<16; i++) {

    // }

    int n = 243;
    int idx = 2;
    int changed = (n & ((1 << (int(log2(n) + 1))-idx)-1));

    cout << n << " " << changed;
}

// 1 1 1 1 0 0 1 1  : 128 + 64 + 32 + 16 + 3 -> 243
// idx = 2
// 0 0 1 1 0 0 1 1 -> 51

// bitReq = log2(n) +1;
// idx = bitReq - idx;
// temp = i << idx : 1 0 0 0 0 0 0
// temp = tmep -1;
//  0 0 1 1 1 1 1 1 
//  num = num & temp;
