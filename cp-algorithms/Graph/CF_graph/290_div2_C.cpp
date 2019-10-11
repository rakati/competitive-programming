/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {for (auto e: v) cout << e.F << d;cout << '\n';}
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
vector<vi> adj(26);
vb vis(26,0);
vi ans;
int nt(string &s1, string &s2){
    RP(i,0,(int)min(s1.size(), s2.size())) if (s1[i] != s2[i]) return i;
    return -1;
}

void dfs(int v){
    vis[v] = 1;
    for (int u : adj[v])
        if (!vis[u]) dfs(u);
    ans.PB(v);
}

void tp(){
    vis.assign(26,0);
    ans.clear();
    for (int i = 0; i < 26; i++) if (!vis[i]) dfs(i);
    reverse(ALL(ans));
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<string> vs(n);
    RP(i,0,n) cin >> vs[i];
    vb add(26,0);
    RP(i,0,n - 1) {
        int diff = nt(vs[i], vs[i + 1]);
        if (diff >= 0) {
            if (add[vs[i+1][diff] - 'a']) {cout << "Impossible\n";return 0;}
            adj[vs[i][diff] - 'a'].PB(vs[i+1][diff] - 'a');
            add[vs[i+1][diff] - 'a'] = 1;
        }
    }
    tp();
    for (int i : ans) cout << char(i + 'a');
    cout << endl;
    return 0;
}