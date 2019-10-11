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

int     min_neighbor(int **tab, int i, int j){
    return min(tab[i + 1][j], min(tab[i - 1][j], min(tab[i][j + 1], tab[i][j - 1]))) - tab[i][j];
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        vector<vector<pair<int, bool> > > tab(n);
        int mx = 0;
        RP(i,0,n) {
            tab[i].resize(m);
            RP(j,0,m){
                cin >> tab[i][j].F;
                mx = max(tab[i][j].F, mx);
                tab[i][j].S =  (i == 0 || j == 0 || i == n - 1 || j == m - 1);
            }
        }
        int tab[n][m];
    }
    return 0;
}