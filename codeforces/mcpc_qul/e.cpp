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
int arr[100010];
int dp1[100010];
int dp2[100010];
int pre[100010];
int n;

int new_score(int pos, bool t){
    if (pos >= n) return ;
    RP(i,0,5){
        if (dp1[pos][i] == -1) dp1[pos][i] =  new_score(pos+i, {p_score.F ^ (pre[pos + i] ^ pre[pos]), p_score.S}, 1);
        if (dp2[pos][i] == -1) dp2[pos + i][i] =  new_score(pos+i, {p_score.F ^ (pre[pos + i] ^ pre[pos]), p_score.S}, 1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> n;
    RP(i,0,n) cin >> arr[i];
    memset(dp1, -1, sizeof(dp1));
    memset(dp2, -1, sizeof(dp2));
    pii p = new_score(0, {0,0},0);
    cout << (p.F > p.S ? "Bilal" : "Anass") << endl;
    return 0;
}