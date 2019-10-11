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
    int n;
    cin >> n;
    vi v(n + 1, 0);
    string s;
    cin >> s;
    RP(i, 1, n + 1) v[i] = v[i - 1] + (s[i - 1] == '1');
    vi res1, res2;
    res1.PB(0);
    RP(i, 1, n + 1)
        RV(j, n, i - 1) if (j - i + 1 - v[j] + v[i - 1] != v[j] - v[i - 1]) {res1.PB(j); i = j; break;}
    cout << res1.size() - 1 << endl;
    RP(i,0,(int)(res1.size()) - 1) cout << s.substr(res1[i], res1[i + 1] - res1[i]) << ' ';
    cout << '\n';
    return 0;
}