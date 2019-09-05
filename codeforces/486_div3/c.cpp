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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int k;
    cin >> k;
    map<ll,pii> m;
    vpii res = {{INF,INF}, {INF, INF}};
    RP(j,0,k){
        int n;
        cin >> n;
        vl v(n);
        ll sum = 0;
        RP(i,0,n) {cin >> v[i]; sum += v[i];}
        RP(i,0,n){
            if (m.find(sum - v[i]) != m.end() && m[sum - v[i]].F != j && res[0].F == INF){
                res[0] = m[sum - v[i]];
                res[1] = pii(j,i);
            }else m[sum - v[i]] = pii(j,i);
        }
    }
    if (res[0].F != INF){
        cout << "YES\n";
        cout << res[0]. F + 1 << ' ' << res[0].S + 1 << endl << res[1]. F + 1 << ' ' << res[1].S + 1 << endl;
    }else cout << "NO\n";
    return 0;
}