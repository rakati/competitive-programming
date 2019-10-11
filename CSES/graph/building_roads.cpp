#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>

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
#define RP(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> adj[n];
    RP(i,0,m) {
        int u,v;
        cin >> u >> v;
        u--;v--;
        adj[u].PB(v);
        adj[v].PB(u);
    }
    vi res;
    vi vis(n,0);
    RP(i,0,n) {
        if (!vis[i]) {
            vis[i] = 1;
            res.PB(i);
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int e : adj[u]) {
                    if (!vis[e]){
                        vis[e] = 1;
                        q.push(e);
                    }
                }
            }
        }
    }
    cout << res.size() - 1 << endl;
    RP(i,0,res.size() - 1) cout << res[i] + 1 << ' ' << res[i + 1] + 1 << endl;
    return 0;
}