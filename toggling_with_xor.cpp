#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;

    for(int i = 1; i<=10 ; i++) {
        cout << n << endl;
        n ^= 10;
    }
}