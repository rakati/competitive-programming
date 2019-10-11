/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = a; i < b; i++)
#define RV(i,a,b) for(int i = a; i > b; i--)
#define PI 3.14159265359
#define PB push_back
#define MP make_pair
#define MOD 1000000007

typedef long long ll;

ll      binpow(ll n, ll p){
    ll res = 1;
    n %= MOD;
    while(p){
        if (p & 1) res = res * n % MOD;
        n = n * n % MOD; 
        p >>= 1;
    }
    return (res);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n);
    RP(i,0,n) cin >> v[i];
    ll sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        sum += ((v[i + 1] - v[i]) * binpow(2, j - 1)) % MOD; sum %= MOD;
    }
    cout << sum << endl; 
    return 0;
}