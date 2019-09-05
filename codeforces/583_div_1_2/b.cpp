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
    int b, g,n;
    cin >> b >> g >> n;
    vpii res(n + 1);
    RP(i,0,n + 1) {res[i].F = i; res[i].S = n - i;}
    int r1 = 0, r2 = 0;
    RP(i,0, n + 1){
        if (res[i].F <= b && res[i].F <= n && res[i].S <= g) r1++;
        if (res[i].F == n) break;
    }
    RV(i,n, -1){
        if (res[i].S <= g && res[i].S <= n && res[i].F <= b) r2++;
        if (res[i].S == n) break;
    }
    cout << min(r1, r2) << endl;
    return 0;
}