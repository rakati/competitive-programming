#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// src : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1045

ll my_gcd(ll a, ll b, ll &x, ll &y){
    if (a == 0){
        x = 0;
        y = 1;
        return b;
    }
    ll x1, y1;
    ll d = my_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main(){
    ll a,b;
    while (cin >> a >> b){
        ll x,y;
        ll d = my_gcd(a, b, x, y);
        cout << min(x,y) << ' ' << max(x,y) << ' ' << d << '\n';
    }
    return 0;
}