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
    int r,c;
    cin >> r >> c;
    char tab[r][c];
    vpii wolf;
    RP(i,0,r) 
        RP(j,0,c){
            cin >> tab[i][j];
            if (tab[i][j] == 'W') wolf.PB({i,j});
        }
    for (pii p:wolf){
        if (p.F < 0 || p.S < 0 || p.S == c || p.F == r) continue;
        if ((p.F + 1 < r && tab[p.F + 1][p.S] == 'S') ||
            (p.S + 1 < c && tab[p.F][p.S + 1] == 'S') ||
            (p.F - 1 >= 0 && tab[p.F - 1][p.S] == 'S') ||
            (p.S - 1 >= 0 && tab[p.F][p.S - 1] == 'S') ) {cout << "NO\n"; return 0;}
    }
    cout << "YES\n";
    RP(i,0,r)  {RP(j,0,c) cout << (tab[i][j] == '.' ? 'D' : tab[i][j]); cout << '\n';}
    return 0;
}