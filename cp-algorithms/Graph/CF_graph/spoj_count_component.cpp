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

vector<vector<int> > adj;
vb vis;

int    dfs(int u){
    int res = 1;
    for (int v:adj[u])
        if (!vis[v])
            {vis[v] = 1;res += dfs(v);}
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    adj.resize(n + 1);
    RP(i,0,m) {
        int u,v;
        cin >> u >> v;
        adj[u].PB(v);
        adj[v].PB(u);
    }
    vis.resize(n + 1, 0);
    int c = 1;
    RP(i, 1, n + 1) if(!vis[i]) {vis[i] = true;c *= dfs(i) + 1;}
    cout << c << endl;
    return 0;
}