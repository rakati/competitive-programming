#include <iostream>
#include <vector>
#include <algorithm>

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

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,h,k;
    cin >> n >> h >> k;
    ll res = 0;
    ll rem = 0;
    for(ll i = 0; i < n; i++) {
        ll m;
        cin >> m;
        if (rem + m <= h) rem += m;
        else{
            res += rem / k;
            if ((rem % k) + m <= h) rem = rem % k + m; 
            else {
                res++;
                rem = m;
            }
        }
    }
    if (rem > 0) {
        res += rem / k + (rem % k > 0 ? 1 : 0);
    }
    cout << res << '\n';
    return 0;
}