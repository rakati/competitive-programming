#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long n;

    cin >> n;
    cout << n;
    while (n > 1){
        if (n & 1) n = n * 3 + 1;
        else n /= 2;
        cout << ' ' << n;
    }
    return 0;
}
