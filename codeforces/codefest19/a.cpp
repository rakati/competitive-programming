#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll a,b,n;
        cin >> a >> b >> n;
        n = n % 3;
        if (n == 0) cout << a;
        else if (n == 1) cout << b;
        else cout << (a ^ b);
        cout << endl;
    }
    return 0;
}