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
vvi adj;
vb color;
int N;

int dfs(int v){
    int  res = 1;
    for (int u : adj[v])
        res = max(dfs(u) + (color[u] != color[v]), res);
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> N;
    adj.resize(N);
    color.resize(N);
    RP(i,0,N){
        int par;
        char c;
        cin >> par >> c;
        color[i] = (c == '1');
        if (par != 0) adj[par - 1].PB(i);
    }
    RP(i,0,N){
        ms
    }
    cout << dfs(0) << endl;
    return 0;
}