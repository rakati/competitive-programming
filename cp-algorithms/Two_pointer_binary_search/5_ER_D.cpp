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
int vis[1000010];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n, k;
    cin >> n >> k;
    pii res = {1,k};
    vi arr(n);
    RP(i,0,n) cin >> arr[i];
    int i = 0, j = 0;
    int cnt = 1;
    vis[arr[0]]++;
    while (i < n){
        while (j + 1 < n && (cnt + (vis[arr[j+1]] == 0)) <= k) cnt += (++vis[arr[++j]] == 1 ? 1 : 0);
        if (j - i > res.S - res.F) res = {i + 1, j + 1};
        cnt -= (--vis[arr[i]] == 0 ? 1 : 0);
        i++;
    }
    cout << res.F << ' ' << res.S << endl;
    return 0;
}