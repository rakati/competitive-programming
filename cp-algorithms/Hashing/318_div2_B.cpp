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
    int n,m;
    cin >> n >> m;
    int res = INF;
    bool adj[n][n];
    int sz[n];
    memset(sz, 0,sizeof(sz));
    memset(adj, 0, sizeof(adj));
    RP(i,0,m){
        int u,v;
        cin >> u >> v;
        u--;v--;
        adj[u][v] = adj[v][u] = true;
        sz[u]++;sz[v]++;
    }
    RP(i,0,n)
        RP(j,i + 1,n)
            if (adj[i][j])
                RP(k,j+1,n)
                    if (adj[i][k] && adj[j][k]) res = min(res, sz[i] + sz[j] + sz[k]);

    cout << (res == INF ? -1 : res - 6) << endl;
    return 0;
}