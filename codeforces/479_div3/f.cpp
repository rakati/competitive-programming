/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
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
    vi v(n);
    RP(i,0,n) cin >> v[i];
    map<int,int> m;
    int ans = 0;
    int last = v[0];
    RP(i,0,n){
        m[v[i]] = 1 + m[v[i] - 1];
        if (ans < m[v[i]]){ans = m[v[i]]; last = v[i];}
    }
    int cur = last - ans + 1;
    cout << ans << '\n';
    for (int i = 0; i < n && cur <= last;i++)
        if (v[i] == cur) {cout << i + 1 << ' ';cur++;}
    cout << '\n';
    return 0;
}