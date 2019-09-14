/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << '\n';}
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

const int N = 10000000;
int lp[N + 1];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    vi pr;
    int n;
    cin >> n;
    for (int i = 2; i <= n * 2; i++){
        if (lp[i] == 0){
            lp[i] = i;
            pr.PB(i);
        }
        for (int j = 0; j < pr.size() && pr[j]  <= lp[i] && i * pr[j] <= N; j++)
            lp[i * pr[j]] = pr[j];
    }
    vi v(n + 1,0);
    reverse(ALL(pr));
    vb vis(n + 1, 0);
    int j = 0;
    RV(i, n, -1){
        if (v[i] != 0) continue;
        while (vis[pr[j] - i] || pr[j] - i > n) j++;
        v[i] = pr[j] - i;
        vis[pr[j] - i] = 1;
    }
    RP(i, 1, n + 1) cout << i << ' ';
    cout << '\n';
    RP(i, 1, n + 1) cout << v[i] << ' ';
    cout << '\n';
    return 0;
}