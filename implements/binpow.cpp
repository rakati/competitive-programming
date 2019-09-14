/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll      binpow(ll n, ll p, ll m){
    ll res = 1;
    n %= m;
    while (p){
        if (p & 1) res = res * n % m;
        n = n * n % m;
        p >>= 1;
    }
    return res;
}

int main(){
    ll n, p,m;
    ll n1, p1;
    cin >> n >> p;
    cin >> n1 >> p1;
    cout << binpow(n, p, 10000) + binpow(n1, p1, 10000) << endl;
    return 0;
}