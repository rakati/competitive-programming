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
    cin >> n;
    unordered_map<string, ll> m;
    vector<pair<string, ll> > r(n);
    RP(i,0,n){
        pair<string, ll> p;
        cin >> p.F >> p.S;
        m[p.F] += p.S;
        r[i].F = p.F;
        r[i].S = m[p.F];
    }
    ll ms = 0;
    for (auto it : m)
        if (it.S > ms) ms = it.S;
    set<string> winners;
    for (auto it : m){
        if (it.S == ms) winners.insert(it.F);
    }
    for (auto p : r) 
        if (p.S >= ms && winners.find(p.F) != winners.end()){
            cout << p.F << endl;
            break;
        }
    return 0;
}