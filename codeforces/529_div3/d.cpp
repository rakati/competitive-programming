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
    int n;
    cin >> n;
    vpii v(n);
    RP(i,0,n){
        int x,y;
        cin >> x >> y;
        v[i] = pii(--x,--y);
    }
    vi res;
    res.PB(0);
    while (res.size() < n){
        auto x = v[res.back()];
        if ((v[x.F].F == x.S || v[x.F].S == x.S) && find(ALL(res),x.F) == res.end())
            res.PB(x.F);
        else res.PB(x.S);
    }
    RP(i,0,res.size()) cout << res[i] + 1 << ' ';
    cout << endl;
    return 0;
}