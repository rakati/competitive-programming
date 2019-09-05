/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define ALL(x) x.begin(),x.end()
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

bool mysort(const pii &a, const pii &b){
    if (a.F != b.F) return a.F < b.F;
    return a.S < b.S;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    vpii v(n);
    RP(i,0,n) {cin >> v[i].F;v[i].S = 0;}
    int op = INF;
    while (1){
        sort(ALL(v), mysort);
        if (v[n - 1].F == 0) break;
        RP(i,0,n){
            int c = 1;
            int top = v[i].S;
            while (v[i].F == v[i + c].F && i + c < n && c < k) {top += v[i + c].S;c++;}
            if (c == k) op = min(top, op);
            i += c - 1;
        }
        v[n - 1].S++;
        v[n - 1].F >>= 1;
    }
    cout << op << endl;
    return 0;
}