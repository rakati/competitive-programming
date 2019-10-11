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
    int n,k;
    cin >> n >> k;
    vpii s(n);
    RP(i,0,n) {cin >> s[i].F;s[i].S = i + 1;}
    sort(ALL(s));
    vi res;
    res.PB(s[0].S);
    RP(i,1,n)
        if (s[i].F != s[i - 1].F) res.PB(s[i].S);
    if (res.size() >= k) {
        cout << "YES\n";
        int i = 0;
        sort(ALL(res));
        while (i < k){
            cout << res[i++] << ' ';
        }
    }else cout << "NO\n";
    return 0;
}