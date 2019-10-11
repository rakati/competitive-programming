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
int n,m;
char arr[1010][1010];
bool vis[1010][1010];

void dfs(int i,int j) {
    vis[i][j] = true;
    if (i - 1 >= 0 && !vis[i - 1][j] && arr[i - 1][j] != '#') dfs(i-1,j);
    if (j - 1 >= 0 && !vis[i][j - 1] && arr[i][j - 1] != '#') dfs(i,j - 1);
    if (i + 1 < n && !vis[i + 1][j] && arr[i + 1][j] != '#') dfs(i+1,j);
    if (j + 1 < m && !vis[i][j + 1] && arr[i][j + 1] != '#') dfs(i,j+1);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    RP(i,0,n) {RP(j,0,m) cin >> arr[i][j];arr[i][m] = '\0';}
    int c = 0;
    RP(i,0,n) RP(j,0,m) {if (arr[i][j] != '#' && !vis[i][j]) {c++; dfs(i,j);}} 
    cout << c << endl;
    return 0;
}