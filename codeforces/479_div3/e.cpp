/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define ALL(x) x.begin(),x.end()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair

const double eps = 1e-9;
const int INF = 1e9;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    vii v(n+1);
    RP(i,0,m){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vb vis(n,0);
    int res = 0;
    RP(i, 0, n){
        if (vis[i]) continue;
        queue<int> q;
        q.push(i);
        vis[i] = true;
        bool cycle = true;
        while (!q.empty()){
            int e = q.front();
            q.pop();
            if (v[e].size() != 2) cycle = false;
            for (int o : v[e]){
                if (!vis[o]){
                    q.push(o);
                    vis[o] = true;
                }
            }
        }
        if (cycle) res++;
    }
    cout << res << endl;
    return 0;
}