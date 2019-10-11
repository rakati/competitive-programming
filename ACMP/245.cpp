#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {for (auto e: v) cout << e << ' ';}
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
    int n;
    cin >> n;
    if (n == 0) {cout << 0 << endl; return 0;}
    vi arr(n);
    RP(i,0,n) cin >> arr[i];
    sort(ALL(arr));
    vl pref(n+1);
    pref[0] = 0;
    RP(i,0,n) pref[i+1] = pref[i] + arr[i];
    int i = 0, j = 1;
    ll res = arr[n-1];
    while (i < n){
        while (j < n && (arr[i] +  arr[j-1] > arr[j] || i + 1 == j)) j++;
        res = max(res, pref[j] - pref[i]);
        i++;
    }
    cout << res << endl;
    return 0;
}