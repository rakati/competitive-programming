/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define SHOW(v) {RP(i,0,v.size()) cout << v[i] << ' ';cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double eps = 1e-9;
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

vi  rabin_karp(string const& s, string const &t){
    const int p = 31;
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();

    vl p_pow(max(S, T));
    p_pow[0] = 1;
    RP(i,1,p_pow.size()) p_pow[i] = (p_pow[i - 1] * p) % m;
    vl ht(T + 1, 0);
    RP(i,0,T) ht[i + 1] = (ht[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;
    ll h_s = 0;
    RP(i,0,S) h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m;
    vi occ;
    RP(i,0,T - S + 1){
        ll cur = (ht[i + S] + m - ht[i]) % m;
        if (cur == h_s * p_pow[i] % m) occ.PB(i + 1);
    }
    return occ;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--){
        string s,p;
        cin >> s >> p;
        vi res = rabin_karp(p,s);
        if (res.size()){
            cout << res.size() << endl;
            SHOW(res);
        }else{
            cout << "Not Found\n";
        }
    }
    return 0;
}