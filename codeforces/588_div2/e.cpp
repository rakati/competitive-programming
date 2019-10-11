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
vii adj;
vl b;
vb vis;
int n;

ll mygcd (ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll     dfs(int v){
    vis[v] = true;
    ll res = b[v] % MOD;
    for (int u : adj[v])
        if (!vis[u])
            res = res + mygcd(b[v], dfs(u));
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> n;
    b.resize(n);
    adj.resize(n);
    vis.resize(n, 0);
    RP(i,0,n) cin >> b[i];
    RP(i,0, n - 1){
        int u,v;
        cin >> u >> v;
        adj[--u].PB(--v);
        adj[v].PB(u);
    }
    cout << dfs(0) << endl;
    return 0;
}