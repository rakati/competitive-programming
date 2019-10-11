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
using vb    = vector<bool>;
using vvb   = vector<vb>;
using vc    = vector<char>;
using vvi   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

vvb arr;
vvb vis;
int n,m;

bool dfs(int i, int j){
    if (i == n - 1 && j == m - 1) return true;
    vis[i][j] = 1;
    bool x = false;
    if (!x && i + 1 < n && !vis[i+1][j] && !arr[i+1][j]) x = dfs(i+1,j);
    if (!x && j + 1 < m && !vis[i][j+1] && !arr[i][j+1]) x = dfs(i,j+1);
    if (x && !(i == 0 && j == 0)) arr[i][j] = true;
    return x;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> n >> m;
    arr.resize(n);
    vis.resize(n);
    int res = 0;
    RP(i,0,n) {vis[i].resize(m,0);arr[i].resize(m);}
    RP(i,0,n) {
        string s; cin >> s;
        RP(j,0,m) arr[i][j] = (s[j] == '#');
    }
    if (dfs(0,0)) {
        RP(i,0,n) RP(j,0,m) vis[i][j] = 0;
        cout << (dfs(0,0) ? 2 : 1) << endl;
    } else cout << 0 << endl;
    return 0;
}