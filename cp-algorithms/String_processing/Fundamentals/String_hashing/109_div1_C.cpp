/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
#define ALL(x) x.begin(),x.end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
const double EPS = 1e-9;
const double PI = 2 * acos(0.0);
const int INF = 1e9;

using ll    = long long;
using ull   = unsigned long long;
using vi    = vector<int>;
using vl    = vector<ll>;
using vb    = vector<bool> ;
using vc    = vector<char>;
using vvi   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    ll n, m;
    cin >> n >> m;
    ll pp[n],h[n],res = 0;
    memset(h, 0,sizeof(h));
    vector<ll> adj[n];
    pp[0] = 1;
    RP(i,1,n) pp[i] = pp[i - 1] * 31ll;
    RP(i,0,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        h[a] += pp[b];
        h[b] += pp[a];
        adj[a].PB(b);
    }
    map<ll,ll> mp;
    RP(i,0,n) mp[h[i]]++;
    for (auto e:mp) res += e.S * (e.S - 1) / 2;
    RP(i,0,n) for (ll e :adj[i]) if (h[i] + pp[i] == h[e] + pp[e]) res++;
    cout << res << endl;
    return 0;
}