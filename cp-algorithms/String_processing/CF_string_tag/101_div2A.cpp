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
    string s1,s2;
    cin >> s1 >> s2;
    vi v(26, 0);
    RP(i,0, s1.size()) v[s1[i] - 'A']++;
    RP(i,0, s2.size()) v[s2[i] - 'A']++;
    string t;
    cin >> t;
    RP(i,0, t.size()) v[t[i] - 'A']--;
    RP(i, 0, 26) if (v[i] != 0) {cout << "NO\n"; return 0;}
    cout << "YES\n";
    return 0;
}