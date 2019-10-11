/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
#define ALL(x) x.begin(),x.end()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double eps = 1e-9;
const int INF = 1e9;

using ll    = long long;
using ull   = unsigned long long;
using vi    = vector<int>;
using vl    = vector<ll>;
using vb    = vector<bool> ;
using vc    = vector<char>;
using vii   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

vl dp;
vpii v;

int     fcalc(int i, int l){
    if (v[i + 1] == 0) return 0;
    if (dp[i] != -1) return dp[i];
    dp[i] = min(calc(2,(v[i].F + 1 != v[i].F && v[1].F + 1 != v[0].F) ? v[1].F + 1 : v[1].F + 2) + v[1].S * (v[1].F + 1 != v[2].F && v[1].F + 1 != v[0].F ? 1 : 2), calc(2,v[1].F));
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        v.resize(n + 1);
        v[0] = {0,0};
        RP(i,1,n + 1) cin >> v[i].F >> v[i].S;
        v.PB({0,0});
        memset(dp, -1, sizeof(dp));
        if (v[1].F + 1 != v[2].F && v[1].F + 1 != v[0].F) cout << min(fcalc(2, v[1].F + 1) + v[1].S, fcalc(2,v[1].F)) << endl;
        else cout << min(fcalc(2, v[1].F + 2) + v[1].S, fcalc(2,v[1].F)) << endl;
        cout << min(calc(2,(v[1].F + 1 != v[2].F && v[1].F + 1 != v[0].F) ? v[1].F + 1 : v[1].F + 2) + v[1].S * (v[1].F + 1 != v[2].F && v[1].F + 1 != v[0].F ? 1 : 2), calc(2,v[1].F)) << endl;
    }
    return 0;
}