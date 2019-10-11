/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << d;cout << '\n';}
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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vpll ab(n);
    vl a(n), b(n);
    RP(i,0,n) cin >> ab[i].F;
    RP(i,0,n) cin >> ab[i].S;
    sort(ALL(ab));
    unordered_set<int> tot;
    RV(i,n - 1,0){
        if (ab[i].F == ab[i - 1].F){
            ll temp = ab[i].F;
            tot.insert(i); tot.insert(i - 1);
            RV(j, i - 2, -1) if ((temp | ab[j].F) == temp) tot.insert(j);
        }
    }
    ll res = 0;
    for (int pos : tot) res += ab[pos].S;
    cout << res << endl;
    return 0;
}