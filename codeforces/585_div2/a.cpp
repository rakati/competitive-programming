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
    int a1,a2,k1,k2,n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if (n - ((a1 * (k1 - 1)) + (a2 * (k2 - 1))) < 0) cout << 0;
    else cout << n - ((a1 * (k1 - 1)) + (a2 * (k2 - 1)));
    if (k1 < k2){
        if (k1 * a1 <= n) cout  << ' ' << a1 + (n - (a1 * k1)) / k2 << endl;
        else cout << ' ' << n / k1 << endl;
    }else{
        if (k2 * a2 <= n) cout << ' ' << a2 + (n - (a2 * k2)) / k1 << endl;
        else cout << ' ' << n / k2 << endl;
    }
    return 0;
}