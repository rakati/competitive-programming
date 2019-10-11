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
    int n, d,e;
    cin >> n >> d >> e;
    e *= 5;
    int t1 = n, t2 = n;
    int tt1 = INF, tt2 = INF;
    int i = 0;
    t1 %= e;
    while(e * i <= n){
        tt1 = min((t1 + (i * e)) % d, tt1);
        i++;
    }
    i = 0;
    t2 %= d;
    while (d * i <= n){
        tt2 = min((t2 + (i * d)) % e, tt2);
        i++;
    }
    cout << min(tt1,tt2) << endl;
    return 0;
}