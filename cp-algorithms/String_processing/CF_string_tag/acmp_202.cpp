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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string s,t;
    cin >> s >> t;
    int n = max(s.size(), t.size());
    ull pp[n], p = 53, m = (1ull >> 31) - 1;
    pp[0] = 1;
    RP(i,1,n) pp[i] = pp[i-1] * p % m;
    ull pre[s.size() + 1];
    pre[0] = 0;
    RP(i,0,s.size()) pre[i+1] = (pre[i] + (s[i] - 'a') * pp[i]) % m;
    ull h_t = 0;
    RP(i,0,t.size()) h_t = (h_t + (t[i] - 'a') * pp[i]) % m;
    RP(i,0,(int)s.size() - (int)t.size() + 1) if (h_t * pp[i] % m == pre[i + t.size()] - pre[i]) cout << i << ' ';
    cout << endl;
    return 0;
}