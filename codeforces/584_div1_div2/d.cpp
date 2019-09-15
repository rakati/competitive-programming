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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n, k;
    cin >> n >> k;
    vb vis(n + 1, 0);
    vector<vector<int> > v(n + 1);
    vpii s(k);
    RP(i,0,k){
        pii p;
        cin >> p.F >> p.S;
        s.PB(p);
        v[p.F].PB(p.S);
        v[p.S].PB(p.F);
    }
    int eat = 0;
    for(pii p : s){
        queue<int> q;
        if (vis[p.F] && vis[p.S]) continue;
        q.push(vis[p.F] ? p.S : p.F);
        vis[q.front()] = 1;
        while (!q.empty()){
            int e = q.front();
            q.pop();
            for (int f : v[e]){
                if (vis[f]) continue;
                vis[f] = 1;
                eat++;
                q.push(f);
            }
        }
    }
    cout << k - eat << endl;
    return 0;
}