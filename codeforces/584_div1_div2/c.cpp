/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v) {RP(i,0,v.size()) cout << v[i];cout << '\n';}
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
        int n;
        cin >> n;
        vc d(n);
        RP(i,0,n) cin >> d[i];
        vc s = d;
        vc res(n);
        sort(ALL(s));
        int j = 0;
        char c = d[0];
        bool valid = true;
        RP(i,0, n) {
            if (d[i] != s[j]) {
                if (d[i] < c) {valid = 0; break;}
                res[i] = '2';
                c = d[i];
            }else {res[i] = '1';j++;}
        }
        if (!valid) cout << '-' << endl;
        else SHOW(res);
    }
    return 0;
}