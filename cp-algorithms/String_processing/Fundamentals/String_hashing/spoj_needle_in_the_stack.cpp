/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
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
    while (cin >> n){
        string s,pat;
        cin >> pat >> s;
        int S = s.size();
        if (S < n) {cout << '\n'; continue;}
        int p = 31;
        int m = 1e9 + 9;

        vl p_pow(S);
        p_pow[0] = 1;
        RP(i,1,S) p_pow[i] = (p_pow[i - 1] * p) % m;

        vl h_s(S + 1, 0);
        RP(i,0,S) h_s[i + 1] = (h_s[i] + (s[i] - 'a' + 1) * p_pow[i]) % m;

        ll h_p = 0;
        RP(i,0,n) h_p = (h_p + ((pat[i] - 'a' + 1) * p_pow[i])) % m;

        RP(i,0,S - n + 1) {
            if (((h_s[i + n] + m - h_s[i]) % m) == (h_p * p_pow[i]) % m) cout << i << endl;
        }
    }
    return 0;
}