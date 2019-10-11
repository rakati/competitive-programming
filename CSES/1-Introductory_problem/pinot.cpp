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
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        while (x != y && x > 0 && y > 0){
            if (x < y) swap(x,y);
            int l = 0, r = min(x / 2, y);
            int mid;
            while (l <= r){
                mid = (l + r) / 2;
                if (x - mid * 2 > y - mid) l = mid + 1;
                else if (x - mid * 2 < y - mid) r = mid - 1;
                else break;
            }
            x -= (mid * 2);
            y -= mid;
        } 
        if ((x == 0 && y == 0) || ((x == y) && x % 3 == 0 && y % 3 == 0)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}