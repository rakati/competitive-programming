/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << d;cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second
 
const double EPS = 1e-9;
const double PI = 2 * acos(0.0);
const long long INF = 1e11;
 
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

vector< vector< pair<ll, int> > > adj;
 
void    dijkstra1(int s, vector<int> &d vector<int> &p){
    int adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vb vis(n,false);
 
    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) 
            if (!vis[j] && (v == -1 || d[j] < d[v])) v = j;
        
        if (d[v] == INF) break;
 
        vis[v] = true;
        for (auto e : adj[v]) {
            int to = e.F;
            int len = e.S;
 
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

void    dijkstra2(vi &p, int s) {
    int n = adj.size();
    vl d(n, INF);
 
    d[s] = 0;
    set< pair<ll, int> > q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->S;
        q.erase(q.begin());
 
        for (auto e : adj[v]) {
            int to = e.F;
            ll len = e.S;
 
            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    adj.resize(n);
    RP(i,0,m) {
        int u,v,w;
        cin >> u >> v >> w;
        u--,v--;
        adj[u].PB({v,w});
        adj[v].PB({u,w});
    }
    vi p(n,-1);
    dijkstra2(p, 0);
    int v = n - 1;
    vi path;
    while (v != -1) { path.PB(v); v = p[v];}
    reverse(ALL(path));
    if (path.size() > 1) for (int u: path) cout << u + 1 << ' ';
    else cout << -1;
    cout << endl;
    return 0;
}