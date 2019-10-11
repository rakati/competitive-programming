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
using vvi   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        vl p(n);
        RP(i,0,n) {cin >> p[i];p[i] /= 100;}
        ll x,y,a,b,k;
        cin >> x >> a >> y >> b >> k;
        vpii arr;
        RP(i,0,n) {
            int temp = ((i + 1) % a == 0 ? x : 0) + ((i + 1) % b == 0 ? y : 0);
            if (temp != 0) arr.PB({temp,i});
        }
        sort(ALL(p));
        int l = 1,h = arr.size();
        int res = INF;
        while (l <= h){
            int mid = l + (h - l) / 2;
            ll val = 0;
            vpii temp(arr.begin(), arr.begin() + mid);
            sort(ALL(temp));
            int c = 0, z = 1;
            RV(i,mid - 1,-1){
                val += p[n - z] * temp[i].F;
                c = max(c, temp[i].S);
                z++;
            }
            if (val >= k) {res = min(res, c); h = mid - 1;}
            else l = mid + 1;
        }
        cout << (res == INF ? -1 : res + 1) << endl;
    }
    return 0;
}