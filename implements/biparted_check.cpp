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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n,e;
    cin >> n >> e;
    vector<vector<int> > adj(n);
    RP(i,0,e){
        int x, y;
        cin >> x >> y;
        x--; y--;
        adj[x].PB(y);
        adj[y].PB(x);
    }
    vector<int> side(n, -1);
    bool is_bipartite = true;
    queue<int> q;
    for (int st = 0; st < n; st++){
        if (side[st] == -1){
            q.push(st);
            side[st] = 0;
            while (!q.empty()){
                int v = q.front();
                q.pop();
                for (int u : adj[v]){
                    if (side[u] == -1){
                        side[u] = side[v] ^ 1;
                        q.push(u);
                    }else{
                        is_bipartite &= side[u] != side[v];
                    }
                }
            }
        }
    }
    cout << (is_bipartite ? "YES" : "NO") << endl; 
    return 0;
}