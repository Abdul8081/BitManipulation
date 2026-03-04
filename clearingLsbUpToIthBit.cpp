#include<bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0; i<16; i++) {
        int idx = 2;
        int temp = i << idx;
        temp -= 1;
        temp = ~temp;
        cout << i << " " << (i & temp) << endl;
    }
}


// 1 1 1 0 0 1 1 0
// idx = 2;
// 1 1 1 0 0 1 0 0 

// temp = 1 << idx -> 1 0 0 
// temp -= 1 : 1 1 
// temp = ~temp : 1 1 1 1 1 1 0 0 
// temp & num : 1 1 1 0 0 1 0 0 
