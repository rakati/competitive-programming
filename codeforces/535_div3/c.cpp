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
    int n;
    cin >> n;
    vector<pair<char, bool> >;
    RP(i,0,n) {cin >> v[i].F;v[i].S = true;}
    vector<int> dp(n,0);
    int r,g,b;
    r = g = b = 0;
    RP(i,0,n){
        int l = i - 3,r = i + 3;
        while (l >= 0){
            if (v[l].F == v[i].F) dp[i]++;
            l -= 3;
        }
        while (r < n){
            if (v[r].F == v[i].F) dp[i]++;
            r += 3;
        }
        if (v[i].F == 'R' && r < dp[i]) r = dp[i];
        else if (v[i].F == 'G' && g < dp[i]) g = dp[i];
        else if (b < dp[i]) b = dp[i];
    }
    RP(i,0,n){

    }
    return 0;
}