/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
#define BET(a, b, c) (a) >= (b) && (a) <= (c)
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

int     zipit(char s){
    if (BET(s, '0', '9')) return s - '0';
    if (BET(s, 'A', 'Z')) return s - 'A' + 10;
    return (s - 'a' + 26 + 10);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string t;
    cin >> t;
    const int p = 67;
    const int m = 1e9 + 9;
    //const int m2 = 1e9 + 7;
    vl p_pow(t.size());
    p_pow[0] = 1;
    RP(i,1,t.size()) p_pow[i] = (p_pow[i - 1] * p) % m;
    vl t_h(t.size() + 1, 0);
    RP(i, 0, t.size()) t_h[i + 1] = (t_h[i] + (zipit(t[i]) + 1) * p_pow[i]) % m;
    int n;
    cin >> n;
    RP(i,0,n){
        string s;
        cin >> s;
        ll s_h = 0;
        RP(i, 0, s.size()) s_h = (s_h + (zipit(s[i]) + 1) * p_pow[i]) % m;
        bool occur = false;
        RP(i,0, (int)t.size() - (int)s.size() + 1) if ((t_h[i+s.size()] + m - t_h[i]) % m == (s_h * p_pow[i]) % m){occur = true; break;}
        cout << (occur ? "Y\n" : "N\n");
    }
    return 0;
}