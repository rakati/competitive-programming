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
    int h,w;
    cin >> h >> w;
    bool dim[h][w];
    char p;
    int count = 0;
    RP(i,0,h) RP(j,0,w) {
        cin >> p;
        dim[i][j] = (p == '*');
        if (dim[i][j]) count++;
    }
    pair<int, int> f = {-1,-1};
    RP(i,1,h - 1) RP(j,1,w - 1) if (dim[i][j] && dim[i - 1][j] && dim[i + 1][j] && dim[i][j - 1] && dim[i][j + 1]){f = {i,j};break;}
    if (f.F == -1) {cout << "NO\n";return 0;}
    int k = f.F + 1;
    while (k < h && dim[k][f.S]) k++,count--;
    k = f.F - 1;
    while (k >= 0 && dim[k][f.S]) k--,count--;
    k = f.S + 1;
    while (k < w && dim[f.F][k]) k++,count--;
    k = f.S - 1;
    while (k >= 0 && dim[f.F][k]) k--,count--;
    cout << (count - 1 == 0 ? "YES\n" : "NO\n");
    return 0;
}