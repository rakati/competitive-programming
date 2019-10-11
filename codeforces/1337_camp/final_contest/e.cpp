#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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

ll f(ll x){
    return (x * x) + (2 * x) + 1;
} 

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>> t;
    while (t--){
        ll k; cin >> k;
        ll l = 0, r =  10e9;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            ll fmid = f(mid);
            if (fmid < k) l = mid + 1;
            else if (fmid > k){
                if (f(mid - 1) < k) {cout << mid << '\n';break;}
                else r = mid;
            }
            else {cout << mid << '\n';break;}
        }
    }
    return 0;
}