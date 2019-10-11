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

int N,M;
vector< vector<char> > tab;
int dp[60][60];

int     dfs(int i, int j, char c){
    if (i == N || j == M || i < 0 || j < 0) return 0;
    if (tab[i][j] != c) return 0;
    if (tab[i][j] == 'Z') return 1;
    if (dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(dfs(i-1, j-1,tab[i][j] + 1),max(dfs(i-1, j,tab[i][j] + 1), max(dfs(i-1, j+1,tab[i][j] + 1), max(dfs(i, j - 1,tab[i][j] + 1), max(dfs(i, j+1,tab[i][j] + 1), max(dfs(i+1, j-1,tab[i][j] + 1), max(dfs(i+1,j,tab[i][j] + 1),dfs(i+1,j+1,tab[i][j] + 1)))))))) + 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int c = 1;
    while((cin >> N >> M) && N != 0 && M != 0){
        tab.resize(N);
        memset(dp, -1, sizeof(dp));
        int res = 0;
        RP(i,0,N) { tab[i].resize(M); RP(j,0,M) cin >> tab[i][j];}
        RP(i,0,N) RP(j,0,M) if (tab[i][j] == 'A') res = max(max(dfs(i-1, j-1,tab[i][j] + 1),max(dfs(i-1, j,tab[i][j] + 1), max(dfs(i-1, j+1,tab[i][j] + 1), max(dfs(i, j - 1,tab[i][j] + 1), max(dfs(i, j+1,tab[i][j] + 1), max(dfs(i+1, j-1,tab[i][j] + 1), max(dfs(i+1,j,tab[i][j] + 1),dfs(i+1,j+1,tab[i][j] + 1)))))))) + 1,res);
        cout << "Case " << c++ << ": " << res << endl;
    }
    return 0;
}