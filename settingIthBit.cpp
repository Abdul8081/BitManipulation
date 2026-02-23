#include<bits/stdc++.h>
using namespace std;

int main() {
    int idx = 2;
    for(int num = 1; num <= 10; num++) 
    {
        cout << num << " " << (num  | (1 << idx)) << endl;
    }
}