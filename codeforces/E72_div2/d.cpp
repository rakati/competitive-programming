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

int n;
vii adj;
vb vis;
vi tin, low;
map<pii, int> e;
bool be = false;
int timer;

void    dfs(int v, int p = -1){
    vis[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]){
        if (to == p) continue;
        if (vis[to]) low[v] = min(low[v], tin[to]);
        else{
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v]) {e[{v, to}] = 1;be = true;}
        }
    }
}

void    find_bridge(){
    timer = 0;
    vis.assign(n,false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; i++) if (!vis[i]) dfs(i);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int m;
    cin >> n >> m;
    adj.resize(n);
    vpii ed(m);
    RP(i,0,m){
        int u,v;
        cin >> u >> v;
        adj[--u].PB(--v);
        ed[i] = {u,v};
    }
    find_bridge();
    cout << 1 + (int)be << endl;
    RP(i, 0, m) cout << (int)e[ed[i]] + 1 << ' ';
    return 0;
}