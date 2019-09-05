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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n,m;
        cin >> n >> m;
        vector<int> b(11);
        b[0] = 0;
        RP(i,1,11){
            b[i] = b[i - 1] + (ll)(m * i) % 10;
        }
        ll d = (ll)(n / m);
        cout << ((d / 10) * (ll)b[10]) + (b[d % 10]) << endl;
    }
    return 0;
}