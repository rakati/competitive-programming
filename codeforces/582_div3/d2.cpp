/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define ALL(x) (x).begin(),(x).end()
#define debug()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double eps = 1e-9;
const int INF = 1e9;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int max_size = 200010;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    vi v(n);
    RP(i,0,n) cin >> v[i];
    vii val(max_size);
    RP(i,0,n){
        int x = v[i];
        int c = 0;
        while (x){
            val[x].PB(c);
            c++;
            x >>= 1;
        }
    }
    int res = INF;
    RP(i,0,max_size){
        if (val[i].size() < k) continue;
        sort(ALL(val[i]));
        res = min(res, accumulate(val[i].begin(), val[i].begin() + k, 0));
    }
    cout << res << endl;
    return 0;
}