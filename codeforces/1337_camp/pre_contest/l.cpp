#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<int, int> vii;
typedef vector<ll> vl;
typedef vector<ll, ll> vll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vi > vvi;
typedef vector< vl > vvl;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RP(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007

ll      facto(ll n){
    ll res = 1;
    if (n <= 1) return 1;
    n %= MOD;
    while (n > 1){
        res *= n;
        res %= MOD;
        n--;
    }
    return res;
}

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        map<ll,int> p;
        cin >> n;
        RP(i,0,n){
            ll x;
            cin >> x;
            p[x]++;
        };
        ll res = facto(n) % MOD;
        for (auto mp : p) {
            res *= binpow(facto(mp.S), MOD - 2, MOD);
            res %= MOD;
        }
        cout <<  res << '\n';
    }
    return 0;
}
