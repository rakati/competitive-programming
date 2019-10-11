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

int     lis(vi &v){
    int n = v.size();
    vi dp(n, 1);
    
    RP(i,0,n)
        RP(j,0,i)
            if (v[i] > v[j]) dp[i] = max(dp[i], dp[j] + 1);
    return (*max_element(ALL(dp)));
}

vi     lis_with_element(vi &v){
    int n = v.size();
    vi dp(n, 1);
    vi pos(n, -1);
    RP(i,0,n)
        RP(j,0,i)
            if (v[i] > v[j] && dp[i] < dp[j] + 1) {dp[i] = dp[j] + 1;pos[i] = j;}
    int last = max_element(ALL(dp)) - dp.begin();
    vi res;
    res.PB(v[last]);
    while (pos[last] >= 0){
        res.PB(v[pos[last]]);
        last = pos[last];
    }
    reverse(ALL(res));
    return res;
}

vi     lis_with_element_logn(vi &v){
    int n = v.size();
    vi dp(n + 1, INF);
    vi pos(n + 1, -1);
    RP(i,0,n){
        int j = upper_bound(ALL(dp), v[i])  - dp.begin();
        if (dp[j - 1] < v[i] && v[i] < dp[j]) {dp[j] = v[i]; pos[j] = i;}
    }
    vi res;
    for (int i = 1; i < n && pos[i] != -1; i++)
        res.PB(pos[i]);
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vi v(n);
    RP(i,0,n) cin >> v[i];
    cout << lis(v) << endl;
    vi res = lis_with_element(v);
    RP(i,0,res.size()) cout << res[i] << ' ';
    return 0;
}