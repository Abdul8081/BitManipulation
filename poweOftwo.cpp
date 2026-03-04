#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n) {
    int cnt = 0;
    while(n) {
        n = n & n -1;
        cnt++;
        if(cnt > 1) return false;
    }
    return cnt == 1;
}
int main() {
    for(int i=0; i<=16; i++) {
        cout << i << " ";
        if(isPow2(i) == 1) cout<< "Yes ";
        else cout<< "No";
        cout << endl;
    }
}