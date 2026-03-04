#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15;
    cout << "even times xor : " << (n ^ n) << endl;
    cout << "odd times xor  " << (n ^ n ^ n) << endl;
}