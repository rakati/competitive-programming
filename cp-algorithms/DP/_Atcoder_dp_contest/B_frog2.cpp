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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    RP(i,0,n) cin >> arr[i];
    int dp[n][k];
    RP(i,0,k) dp[0][i] = 0;
    RP(i,1,n) RP(j,0,k) dp[i][j] = INF;
    RP(i,1,n) for (int j = 1; i-j >= 0 && j <= k; j++) dp[i][j-1] = *min_element(dp[i-j], dp[i-j] + k) + abs(arr[i] - arr[i-j]);
    cout << *min_element(dp[n-1], dp[n-1] + k) << endl;
    return 0;
}