#include <bits/stdc++.h>
using namespace std;

int main() {

    // xor rule : xor with same => 0, with different = 1; 
    int  a = 10;
    int b = 5;
    cout << a << b << endl;
    // 1 0 1 0  ^ 0 1 0 1
    a = a ^ b; // 1 1 1 1
    b = a ^ b; // 1 0 1 0 
    a = a ^ b; // 0 1 0 1

    cout << a << b;


}