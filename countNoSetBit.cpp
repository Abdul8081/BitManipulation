#include<bits/stdc++.h>
using namespace std;
// int _set_bit(int n) {
//     int cnt = 0;
//     while (n)
//     {
//         cnt+=1;
//         n = n & n - 1;
//     }
//     return cnt;
// }

// int _set_bit(int n) {
//     int cnt = 0;

//     while (n)
//     {
//         if(1 & (n)) cnt++;
//         n >>= 1;
//     }
//     return cnt;
// }

int _set_bit(int n) {
    int cnt = 0;

    int bit = 1;
    int bit_size = log2(n) + 1;
    for(int i = 1; i <= bit_size; i++) {
        if(n & bit) cnt++;
        bit <<= 1;
    }
    return cnt;
}

int main() {
    for(int n = 1; n <= 32; n++) {
        cout << n << " " << _set_bit(n) << endl;
    }
}